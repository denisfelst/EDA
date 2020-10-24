#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

//FUNCION A
int fA(int n, int * cont)
{
    *cont = 0;
    
    assert(n>=0);
    
    int k=0;
    for(int i=1; i<n;i++){
        for(int j=i; j<=n; j++){
            k=k+j;
            *cont++;
        }
    }
    return k;
     
}
 
//FUNCION B
bool fB(int v[], int *cont)
{
    *cont = 0;
    int n= (sizeof(v)/sizeof(*v));
    
    assert(n>0);
    
    bool cic = true;
    

    int a = 1; 
    int b = n;
    
    while( a < b && (v[a] == v[b]) ){
        a = a+1;
        b = b-1;
        *cont += 4;
    }
    
    if(a>=b)//si el bucle paró en la primera comparacion del while, cuando el a==b or a>b, cont solo suma 1
        *cont++;
    else //si no, significa que paŕo en la segunda comparacion (v[a]==v[b]): hizo dos operaciones y por ello cont suma 2.
        *cont+=2;
        
    
    if(a>=b)
        cic = true;
    else
        cic = false;
    
    //tanto como si cic es true como si es false, se ha hecho una operacion en if(...) asi que cont suma 1.
    *cont++; 
    
    return cic;
}        
        

        
void evaluar_A (unsigned ini, unsigned fin, int inc, ofstream * sal){
    int cont=0; 
    sal->open("resultados_A.dat");
    
    for(int i=ini;i<=fin; i=i+inc){
        
        fA(i, &cont);//esto calculará una tabla costes para cada valor que va tomando i;
        
        *sal << i << "\t" << cont << endl;
    }
    sal->close();
    
}

void evaluar_B (unsigned ini, unsigned fin, int inc, ofstream * sal, int * v ){
    int cont=0;
    sal->open("resultados_B.dat");

    for(int i=ini;i<=fin;i=i+inc){
        cout << i<<endl;
        bool result = fB(v, &cont);
        
        *sal << i << "\t" << cont << endl;
    }
    sal->close();
}


int main(){
    cout << "mainnn" << endl;
    ofstream sal; 
    int v[]= {1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1};
    evaluar_A(1, 100, 5, &sal);
    evaluar_B(1,100,5, &sal,v);
}
