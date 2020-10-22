//FUNCION A

int main(){
    return 0;
}

int function fA(int n)
{
    int cont = 0;
    
    if(n <= 0)
         return -1;
    
    int k=0;
    for(i=1; i++; i<n){
        for(i=1; i++; i<n){
            k=k+j;
            cont++;
        }
    }
     
}
 
//FUNCION B
bool function fB(int v[])
{
    
    int cont =0;
    bool cic = true;
    int n = v.size();
    if(n <= 0)
         return -1;
    
    int a = 1; 
    int b = n;
    
    while( a >= b && (v[a] == v[b]) ){
        a = a+1;
        b = b-1;
        cont = cont + 4;
    }
    cont++;
    if(a>=b)
        cic = true;
    else
        cic = false;
}        
        
    
    

void evaluar_A (unsigned ini, unsigned fin, int inc, ostream & sal){
    for(i=ini;i+inc;i<=fin ){
        fA(i);
    }
    
    
}

void evaluar_B (unsigned ini, unsigned fin, int inc, ostream & sal){
    for(i=ini;i+inc;i<=fin ){
        fB(i);
    }       

    
}
