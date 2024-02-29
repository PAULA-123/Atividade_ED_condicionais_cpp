#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
  double dMassa; 
  double dAltura;
  double dIMC; 
  string strClassificacao;
  
  cout << "Digite sua massa: "; //Entrada da massa do usuário
  cin >> dMassa; 
  
  cout << "Digite sua altura: "; //Entrada da latura do usuário
  cin >> dAltura;
  
  dIMC = dMassa / (dAltura*dAltura); //Calculo do IMC
  
  //Classificação do IMC
  
  if (dIMC < 17) {
      strClassificacao = "Muito abaixo do peso";
  } 
  
  else if ((17 <= dIMC) && (dIMC < 18.5)) {
      strClassificacao = "Abaixo do peso";
  } 
  
  else if ((18.5 <= dIMC) && (dIMC < 25)) {
      strClassificacao = "Peso normal";
  }
  else if ((25 <= dIMC) && (dIMC < 30)) {
      strClassificacao = "Acima do peso";
  }
  else if ((30 <= dIMC) && (dIMC < 35)) {
      strClassificacao = "Obesidade";
  }
  else if ((35 <= dIMC) && (dIMC < 40)) {
      strClassificacao = "Obesidade severa";
  }
  else if (40 <= dIMC){
      strClassificacao = "Obesidade mórbida";
  };
 
 
  cout << "A classificação do seu IMC é: " << strClassificacao;
  return 0;
}



