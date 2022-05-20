 #include <iostream>
 using namespace std;

 int main() {
    //TIPO NOME;
    //TIPO NOME = VALOR;

   int vidas=0; //10,25 valores inteiros
   char letra='B';//declaração de letras
   double decimal=5.2;//2.4999999999
   float decimal12=5.2;//2.5
   bool vivo=true; //true=verdadeiro /false=falso
   string nome="Bruno"; //"Bruno"

   cout <<  "Digite o numero de vidas: ";
   cin >> vidas;

   cout << "Digite uma letra:";
   cin >> letra;

   cout << "Dinheiro: ";
   cin >> decimal;

   cout << "Digite seu nome: ";
   cin >> nome;
   
   vidas=100;

   cout << "\nvidas:" << vidas << "\nLetra: " << letra << "\nDecimal: " << decimal << "\nVivo: " << vivo <<  "\nNome: " << nome << "\n";
  
   return 0; 

 }