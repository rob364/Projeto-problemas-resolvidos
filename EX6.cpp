#include<iostream>
using namespace std;

int tamanhoVet(){
    int tam;
    cout<<"INFORME O TAMANHO:\n";
    cin >> tam;

    return tam;
}
int preenche(int *vetor,int tam){

    cout<<"PREENCHA:\n";
    for(int z=0; z<tam; z++){ //PREENCHENDO VETOR
        cin >> vetor[z];
    }
    cout<<"VETOR INICIAL:\n";
    for(int z=0; z<tam; z++){ //IMPRIMINDO O VETOR
            cout <<vetor[z];
        }
        return 0;
}
int RetiraRepetido(int *vetor,int tam){

    int listaux[tam];
    int rep;
    int aux = 0, auxl = 0;


        for(int z = 0; z < tam; z++){
                rep = 0;
                aux += 1;
                for(int x = aux; x < tam; x++){
                    if (vetor[z] == vetor[x]){
                        rep = 1;
                    }
                }
            if(rep == 1){
                vetor[z] = 0;
                }
        }

        return 0;
}




int main(){
    int tam;

    tam = tamanhoVet();

    int vet[tam];

    preenche(vet,tam);

    RetiraRepetido(vet,tam);

    cout<<"\nVETOR SEM REPETICAO:\n";
    for(int z=0; z<tam; z++){ //IMPRIMINDO O VETOR
            cout << vet[z]<<"\n";
        }
    system("pause");
    return 0;
}