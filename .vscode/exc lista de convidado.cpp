#include <iostream>

using namespace std ;

	const int maxtam = 2 ;
	
	struct Carro {
		
		string ano ;
		string cor;
		string marca ;
		
	};
	
	class Cegonha{
	
		private:
			Carro item[maxtam];
			int inicio, topo , Quantos ;
			
		public:
			Cegonha(void);
			int vazio(void);
			int cheio(void);
			void desenfileirar();
			void listaCarros();
			void enfileirar(Carro& elemento);
			void pesquisarCarro ();
	};
	
Cegonha :: Cegonha (void){
	
	inicio = topo = Quantos = 0;
} 

int Cegonha :: vazio(){
	
	return (inicio  == topo);
}

int Cegonha :: cheio(){  
		
	return ( topo == maxtam);
}

void Cegonha :: enfileirar(Carro &elemento){
	
	if (cheio()){ // Se Quantos estiver com o tamanho máximo de carros na cegonha exibir a mensagem ;
		
		cout <<" A Cegonha está cheia !!!";
		cout<<"\n";
		
	}else{
		
		item[topo] = elemento ;
		cout<<" O carro é do ano de : "<<item[topo].ano<<" da marca "<<item[topo].marca<<" e da cor "<<item[topo].cor<< " está na cegonha ";
		Quantos ++;
		topo ++;
	}
	
}

void Cegonha::listaCarros(){  // Verificando quais os carros estão na Pilha  
    
	if (vazio()){
        cout << "Cegonha Vazia.\n";     
    }
    else{
    
	cout<<"Veiculos presentes na cegonha pela Marca: \n"; 
	         
        for(int i=0;i<Quantos;i++){   
            cout<<"Veiculo "<<i+1<<", Marca: "<<item[i].marca<<"\n";
            
        }    
    }          
}

void Cegonha :: desenfileirar (){
	
	if(vazio()){   // Se Quantos não tiver nenhum registro chama a função vazio ;
		
		cout<<" A fila está vazia, proximo !!!";
	}else{
		
		
		cout<<" O carro do ano "<<item[topo -1].ano<<" da marca "<<item[topo -1 ].marca<<" e da cor "<<item[topo -1 ].cor<< " NÃO está mais na cegonha ";
		Quantos -- ;
		topo--;
		
	}
}


void Cegonha :: pesquisarCarro (){ // Retornar quantos carros tem da mesma marca e caso não tenha nenhum informa para o usuário
	
	string busca ;
	
	if(vazio()){
		
		cout<<"\n Nenhum carro cadastrado para pesquisar ";
	}else{
		
		
		cout <<" Qual a marca de carro deseja pesquisar : ";
		cin>>busca;
		
		for (int i=0; i<maxtam; i++){
			
			if (busca == item[i].marca){
				
				cout <<"\n O "<< i+1<< "° Carro é da marca : "<<item[i].marca;
			}
		}
	} for (int i = 0; i<1; i++){
	
	
			if (busca != item[i].marca){
				
				cout <<" Não tem nenhum carro dessa Marca " ;
			}	
		}
}

int main (){
	
	int op ;
	
	Cegonha x;
	 
	 setlocale(LC_ALL,"portuguese");
	
	do {
		
		cout<<"\n";
		
		cout<<"\n\t Selecione a opção Desejada: ";
		cout<<"\n 1 - Enfileirando carros na Fila " ;
		cout<<"\n 2 - Retirando carros da Fila  " ;
		cout<<"\n 3 - Listar carros na cegonha ";
		cout<<"\n 4 - Tem carro da mesma marca na cegonha ";
		cin>> op;
		cout<<"\n";
		
		if (op == 1){
			
			Carro carro ;
			
			cout<<" Qual a marca do veiculo : ";
			cin>>carro.marca;
			cout<<" Qual o Ano do veiculo : ";
			cin>>carro.ano;
			cout<<" Qual a cor do veiculo : ";
			cin>>carro.cor;
			cout<<"\n========================"<<endl;
			x.enfileirar(carro);
			cout<<"\n========================"<<endl;
		
		}
		
		else if (op == 2){
			
			cout<<"\n";
			cout<<"\n========================"<<endl;
			x.desenfileirar();
			cout<<"\n========================"<<endl;
		}
		else if (op==3){
			
			cout<<"\n";
			cout<<"\n========================"<<endl;
			x.listaCarros();
			cout<<"\n========================"<<endl;
		}else if (op==4){
			
			x.pesquisarCarro();
		}
		
		
	}while (op == 1 || op == 2 || op == 3 || op==4);
	
	
	system("Pause");
	return 0;
}