#include <iostream>

using namespace std;

int exponencial(int &x, int &y)
{
    int resultado = 1;

    for(int aux = 0; aux < y; aux++)
    {
        resultado *=x;
    }
    return resultado;
}
int main()
{
    int numeroBase= 0, expoente = 0, resultadoExp = 0;

    cout<<"Entre com o numero base: ";
    cin>>numeroBase;

    cout<<"Entre com o expoente: ";
    cin>>expoente;

    resultadoExp = exponencial(numeroBase,expoente);

    cout<<" Numero Base: "<<numeroBase<<"|| Expoente: "<<expoente<<"|| Resultado: "<<resultadoExp<<endl;

    return 0;
}

//FUNÇÃO PRÉ DEFINIDA(NATIVA DO COMPILADOR)

#include <iostream>
#include <cmath>

using namespace std;

int exponencial(double &x, double &y)
{
    return pow(x,y);
}
int main()
{
    double numeroBase= 0, expoente = 0, resultadoExp = 0;

    cout<<"\nEntre com o numero base: ";
    cin>>numeroBase;

    cout<<"\nEntre com o expoente: ";
    cin>>expoente;

    resultadoExp = exponencial(numeroBase,expoente);

    cout<<" Numero Base: "<<numeroBase<<" || Expoente: "<<expoente<<" || Resultado: "<<resultadoExp<<endl;

    return 0;
}