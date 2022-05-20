#include <iostream>
using namespace std;
const int MAXTAM=10;

class TipoLista // classe Lista com vetor

{
    private:
    dtring Item [MAXTAM];
    int Primeiro, Ultimo, Quantos;




public:
TipoLista (void);
int Vazia (void);
int Tamanho (void);
void Inserir (string Elemento); // no fim
void Inserir (string Elemento, int Posicao);
void Retirar (string Elemento); // do inicio
void Retirar (int Posicao);
}; // fim classe TipoLista 

TipoLista :: TipoLista(void) //construtor padrão
{ Primeiro = Ultimo = Quantos = 0; }

//******************//
int TipoLista :: Vazia(void)

{return (Primeiro == Ultimo); }

//******************//
int TipoLista :: Tamanho (void)

{ return (Quantos); }

//******************//

void TipoLista :: Inserir(string Elemento)
{
    if (ultimo >= MAXTAM)
    cout << "Lista cheia. \n";
    else {
        Item[Último++] = Elemento;
        Quantos++;
    }
    return
}
//nnnnnnnnnnnnnnn//
void TipoLista :: Inserir (string Elemento, int Posicao)
{
    if (Ultimo >= MAXTAM)
        cout << "Lista cheia. \n";
    else {
        // A partir da posição informada, jogo todos os elementos uma posição para trás e depiis coloco o elemteno informado na posição solicitada.
        for(int i = Ultimo; i >= Posicao; i--) {
            item[i+1] = Item[i];
        }
    }
    item[Posicao] = Elemento;
    Ultimo++;
    Quantos++;
    return;
}

//nnnnnn//

void TipoLista :: Retirar(string Elemento)
{
    if (Vazia())
        cout << "Lista vazia. \n";
    else {
        Elemento = Item[Primeiro];
        Ultimo--;
        Quantos--;
        for (int i = Primeiro; i < Ultimo; i++)
            Item[i] = Item[i++];
    } 
}
//nnnnnnnnnnnnnnnnn//
void TipoLista :: Retirar (int Posicao)
{
    //A partir da posição infirmada, jodo todos os lementos uma posção a frente//
    if (Vazia())
        count << "Lista vazia \n";
    else {
        Ultimo--;
        Quantos--;
        for (int i = Posição; i < Ultimo; i++) {
            Item[i] = Item[i+1];
        }
    }
}

int main () {
    int n, i;
    TipoLista lista;

    //Verificando se a lista esta vazia

    if (lista.Vazia()) {
        cout<< "A lista esta vaxzia" << endl; 
    }
    else{
    cout<< "A lista não esta vazia" << endl
    }
    //Adicionando elementos na lista

    cout << "Adcionado elementos na lusta" << endl;
    lista.Inserir("Luis");
    lista.Inserir("Teste");

    //Verificando se alista esta vazia
    if (lista.Vazia()){
        cout<< "A lista esta vazia " << endl;
    }
    else{
        cout<< "A lista não esta vazia" << endl;
    }

    //Verificando se a lista está vazia
    if (lista.Vazia()){
        cout<< "A listaa esta vazia" << endl;
    }
    else{
        cout<< "A lista nao esta vazia" << endl;
    }
    //Removendo os elementos da lista

    cout << "Removendo elementos da lista" << endl;
    lista.Retirar (1);
    lista.Retirar (3);

    //Verificando se a lista estÃ¡ vazia
    if (lista.Vazia()){
        cout<< "A listaa esta vazia" << endl;
    }
    else{
        cout<< "A lista nao esta vazia" << endl;
    }

    system("pause");

}
