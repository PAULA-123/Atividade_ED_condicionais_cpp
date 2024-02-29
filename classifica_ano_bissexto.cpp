#include <iostream>

using namespace std;

int main() {
  int iAno; 
  string strClassificacao;
  
  cout << "Digite o ano: ";  //Recebe como entrada do usário o ano 
  cin >> iAno; 
  
  //Classifica o ano como bissexto ou não, dada as condições para tal
  if (((iAno % 4 == 0) && (iAno % 100 != 0)) || (iAno % 400 == 0)) {
      strClassificacao = "Bissexto";
  } 
  else {
      strClassificacao = "Não bissexto";
  }
 
 //Imprime a classificação
  cout << "A classificação do ano dado é: " << strClassificacao;
  return 0;
}




