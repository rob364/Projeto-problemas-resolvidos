#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;
const int MAXTAM = 6;

class TipoFila
{
private:
      int Item [MAXTAM];
      int Frente, Tras, Quantos;
      
public:
      TipoFila (void);
      int Vazia (void);
      int Cheia (void);
      int Tamanho (void);
      void Enfileirar (int &Elemento);
      void Desenfileirar (int &Elemento);
};

TipoFila :: TipoFila (void)
{ Frente = Tras = Quantos = 0; }

int TipoFila :: Vazia (void)
{ return (Quantos == 0); }

int TipoFila :: Cheia (void)
{ return (Quantos == MAXTAM); }

int TipoFila :: Tamanho (void)
{ return (Quantos); }

void TipoFila :: Enfileirar (int &Elemento)
{
     
     if (Cheia()){
               cout<<"Fila cheia.\n";
               getch();
     }
     else{
           Item [Tras] = Elemento;
           cout<<"Elemento " <<Item [Tras] << " Na Fila!!! \n";
           getch();
           Quantos++;
           Tras = (Tras + 1) % MAXTAM;
      }
             
      return;
      }
void TipoFila :: Desenfileirar(int &Elemento)
{
    
    if (Vazia()){
              cout<<"Fila Vazia. \n"; 
              getch();
    }
    else{
         Elemento = Item [Frente];
         cout<< Item [Frente] <<" - RETIRADO DA FILA\n";
         Quantos--;
         Frente = (Frente + 1) % MAXTAM;
         getch();
    }
     
}

int main(){
setlocale(LC_ALL,"");
    
    int n, i;
    TipoFila s;
    int x, op;
    
    do{
        system("cls");
        cout<< "\t\t\tFila Estatica"
        << "\n\nDigite Opcao: "
        << "\n\n1 - Enfileirar "
        << "\n\n2 - Desenfileirar ";
        cin>>op;
        
        if(op == 1){
              cout<< " Digite item a ser inserido na fila: ";
              cin>>x;
              cout<< "=====================";
              s.Enfileirar(x);
        }
        if(op == 2){
              s.Desenfileirar(i);
        }
        } while (op == 1 || op == 2);
   
    system("pause");
    getch();
 return 0;   
}