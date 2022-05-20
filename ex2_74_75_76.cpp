#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    //exercicio 74
    
    int vetAtvd1[30];
    
    for(int i = 0; i < 30; i++){
        vetAtvd1[i] = 0;
    }
    
    for(int i = 0; i < 30; i++){
        vetAtvd1[i] = i + 1;
    }
    
    //exercicio 75
    
    int tabela[5] = {10,20,30,40,50};
    int somaTotal = 0;
    int media;
    
    for(int i = 0; i < 5; i++){
        somaTotal = somaTotal + tabela[i];
    }
    
    media = somaTotal / 5;
    
    //exercicio 76
    
   int vetAtvd76[10];
   
   for(int i = 0; i < 10; i++){
        vetAtvd76[i] = 0;
    }
    
    for(int i = 0; i < 10; i++){
        vetAtvd76[i] = pow(i,2);
    }
    
    for(int i = 0; i < 10; i++){
        if(vetAtvd76[i]%2 == 0)
            cout << vetAtvd76[i] << "\n";
    }
    
    return 0;
}