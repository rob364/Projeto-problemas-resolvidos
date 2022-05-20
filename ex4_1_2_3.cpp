
#include <iostream>
#include <string.h>
#include <stdlib.h>


using namespace std; //para utilizar cout
int soma(int a1,int a2){//FUNCAO E AQUELA QUE RETORNA O VALOR
    cout<<"Somando...";
    int soma;
    soma = a1 + a2;
    return soma;
}
int subtracao(int a1,int a2){//FUNCAO E AQUELA QUE RETORNA O VALOR
    cout<<"\nSubtraindo...";
    int subtracao;
    subtracao = a1 - a2;
    return subtracao;
}
void multiplicacao(int a1,int a2){ //PROCEDIMENTO E AQUELE QUE NAO RETORNA O VALOR
    cout<<"\nMultiplicando...";
    int multiplicacao;
    multiplicacao = a1 * a2;
    cout<<"\n"<< a1 << " * " << a2 << " = " << multiplicacao;
}
void divisao(int a1,int a2){ //PROCEDIMENTO E AQUELE QUE NAO RETORNA O VALOR
    cout<<"\nDividindo...";
    int divisao;
    divisao = a1 / a2;
    cout<<"\n"<< a1 << " : " << a2 << " = " << divisao;
}
int main(){ //FUNCAO E AQUELA QUE RETORNA O VALOR
    int resultado;
    int a = 100, b = 10;
    resultado = soma(a,b);
    cout<<"\n"<< a << " + " << b << " = " << resultado;

    resultado = subtracao(a,b);
    cout<<"\n"<< a << " - " << b << " = " << resultado;

    multiplicacao(a,b);
    divisao(a,b);


    return 0;
}