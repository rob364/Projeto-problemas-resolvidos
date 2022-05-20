#include<conio.h>
#include <string.h>
#include<locale.h>
#include<iostream>

using namespace std; //para utilizar cout

const int MAXTAM=3;

struct DataNascimento{
    int dia;
    int mes;
    int ano;
};

struct Cliente{
    string nome;
    int cpf;
    DataNascimento nascimento;
    string naturezaDaSolic;
};

class TipoFila{
private: //atributos private só podem ser usados nas "funções" relacionadas a classe
    Cliente Item [MAXTAM];
    int Frente, Tras, Quantos;
public: //public podem ser chamados em qualquer lugar
    TipoFila (void);
    int Vazia (void);
    int Cheia (void); //o void dentro mostra que a função não aceita nenhum parâmetro
    int Tamanho (void);
    void CadastroCliente (Cliente *cad);
    void Enfileirar (Cliente *Elemento);
    void Desenfileirar (Cliente *Elemento);
    void ImprimiFila (void);
    void Pesquisa(string cliente);
};



//---------------FUNCOES CLIENTE----------------------------//


void TipoFila :: CadastroCliente (Cliente *cad){

        cout << "\t___CADASTRO___\n\n";
        cout << " Insira o nome: ";
        cin >> cad->nome;
        cout << " Insira o cpf: ";
        cin >> cad->cpf;
        cout << " Insira a Dia de Nascimento: ";
        cin >> cad->nascimento.dia;
        cout << " Insira a Mes de Nascimento: ";
        cin >> cad->nascimento.mes;
        cout << " Insira a Ano de Nascimento: ";
        cin >> cad->nascimento.ano;
        cout << "Digite a natureza da solicitação: ";
        cin >> cad->naturezaDaSolic;
        /*
        cout << " CLIENTE: " << cad->nome << "\n CPF: " << cad->cpf <<
        "\n Nascido em: " << cad->nascimento.dia << "/" << cad->nascimento.mes << "/" << cad->nascimento.ano
        << "\n NATUREZA DA SOLCITAÇÃO: " << cad->naturezaDaSolic <<"\n\n";*/
}

//---------------FUNCOES FILA----------------------------//

TipoFila :: TipoFila (void){
    Frente = Tras = Quantos = 0;
}

int TipoFila :: Vazia (void){
    return (Quantos == 0);
}

int TipoFila :: Cheia (void){
    return (Quantos == MAXTAM);
}

void TipoFila :: Enfileirar (Cliente *Elemento){
    if (Cheia()){
        cout << "Fila cheia. \n";
        getch();
    }
    else{
        Item[Tras].nome = Elemento->nome;
        Item[Tras].cpf = Elemento->cpf;
        Item[Tras].nascimento = Elemento->nascimento;
        Item[Tras].naturezaDaSolic = Elemento->naturezaDaSolic;
        cout << "Cliente " << Item[Tras].nome << " Na fila!!! \n";
        Quantos++;
        Tras = (Tras + 1) % MAXTAM;
        getch();
    }
}

void TipoFila :: Pesquisa(string cliente){
    int x,y,clienteNum = 0;
    int i=Frente;
    bool achou = false;
    if (Quantos == 0){
        cout << "Fila vazia. \n";
        getch();
    }
    else{
        if (Tras < Frente){
        x = Tras;
        y = MAXTAM;
        }
        else if (Tras >= Frente){
            x = Tras;
            y = MAXTAM;
        }
        do{
            clienteNum = clienteNum + 1;
            if (Item[i].nome == cliente){
            cout << "\n____CLIENTE NUMERO " << clienteNum << "___\n";
                cout << " NOME: " << Item[i].nome << "\n CPF: " << Item[i].cpf
                <<"\n Nascido em: " << Item[i].nascimento.dia << "/" << Item[i].nascimento.mes << "/" << Item[i].nascimento.ano
                << "\n NATUREZA DA SOLCITAÇÃO: " << Item[i].naturezaDaSolic <<"\n\n";
                achou = true;
                break;
            }
            i = (i + 1) % MAXTAM;
        }while (i != x);

        if (achou == false){
            cout << "\nCliente não encontrado\n";
        }
    }

}

void TipoFila :: ImprimiFila (void){
    int x,y,cliente = 0;
    int i=Frente;
    if (Quantos == 0){
        cout << "Fila vazia. \n";
        getch();
    }
    else{
        if (Tras < Frente){
        x = Tras;
        y = MAXTAM;
        }
        else if (Tras >= Frente){
            x = Tras;
            y = MAXTAM;
        }
        do{
            cliente = cliente + 1;
            cout << "\n____CLIENTE NUMERO " << cliente << "___\n";
            cout << " NOME: " << Item[i].nome << "\n CPF: " << Item[i].cpf
            <<"\n Nascido em: " << Item[i].nascimento.dia << "/" << Item[i].nascimento.mes << "/" << Item[i].nascimento.ano
            << "\n NATUREZA DA SOLCITAÇÃO: " << Item[i].naturezaDaSolic <<"\n\n";
            i = (i + 1) % MAXTAM;
        }while ( i != x);
    }
}

void TipoFila :: Desenfileirar (Cliente *Elemento){
    if (Vazia()){
        cout << "Fila vazia. \n";
        getch();
    }
    else{
        Elemento->nome = Item [Frente].nome;
        cout << "\nCLIENTE CHAMADO PARA ATENDIMENTO: " << Item[Frente].nome << "\n";
        Quantos--;
        getch();
    }
        Frente = (Frente + 1) % MAXTAM;
}

int TipoFila :: Tamanho (void){
    return (Quantos);
}

int main () {
setlocale(LC_ALL,"");
    Cliente cad;
    TipoFila s;
    string cliente;
    int x = 0, op;
        do{

            cout<< "\t\t\tFila Estatica"
            << "\n\nDigite Opcao: "
            << "\n\n1 - Inserir na fila "
            << "\n\n2 - Pesquisar Cliente "
            << "\n\n3 - Imprimir lista de espera "
            << "\n\n4 - Antender próximo da fila ";
            << "\n\n5 - Imprimir tamanho da fila "
            << "\n\n6 - Encerrar ";
            cin>>op;
            switch (op){
              case 1:
                system("cls");
                s.CadastroCliente(&cad);
                s.Enfileirar(&cad);
                system("cls");
                break;
              case 2:
                system("cls");
                cout << "Insira o nome do Cliente a ser Pesquisado: ";
                cin >> cliente;
                system("cls");
                s.Pesquisa(cliente);
                break;
              case 3:
                system("cls");
                s.ImprimiFila();
                break;
              case 4:
                system("cls");
                s.Desenfileirar(&cad);
                system("cls");
                break;
              case 5:
                system("cls");
                cout << "TAMANHO DA FILA: " << s.Tamanho() << "\n";
                break;
            }
            } while (op >= 1 && op <= 5);
    system("pause");
    return 0;
}