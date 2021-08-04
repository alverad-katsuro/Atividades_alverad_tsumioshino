/*
Alfredo Gabriel de Sousa Oliveira
Marcus Maciel Oliveira
Escreva uma função que receba uma cadeia, converta todas as letras acentuadas nas correspondentes
letras sem acentos (á em a,  É em E,  u em u,  Ç em C,  etc.) e devolva a cadeia resultante. 
*/

#include <string>
#include <iostream>
using namespace std;

string accents_to_noaccents(string x) {
  string normal; 
  bool cond = true;
  for(int i = 0; i < x.length(); i++) { 
    int c = (int)x[i]; 
    if (c == -61) {
      cond = false;
      int d = (int)x[i+1];
      if ((d > -129) && (d < -122)) {
        normal += 'A';
      } 
      else if ((d > -121) && (d < -116)) {
        normal += 'E';
      }
      else if ((d > -117) && (d < -112)) {
        normal += 'I';
      }
      else if ((d > -111) && (d < -105)) {
        normal += 'O';
      }
      else if ((d > -111) && (d < -105)) {
        normal += 'U';
      }
      else if ((d > -97) && (d < -90)) {
        normal += 'a';
      } 
      else if ((d > -89) && (d < -84)) {
        normal += 'e';
      }
      else if ((d > -85) && (d < -80)) {
        normal += 'i';
      }
      else if ((d > -79) && (d < -73)) {
        normal += 'o';
      }
      else if ((d > -72) && (d < -67)) {
        normal += 'u';
      }
      else if (d == -121) {
        normal += 'C';
      } 
      else if (d == -89) {
        normal += 'c';
      }
      else if (d == -111) {
        normal += 'N';
      }
      else if (d == -79) {
        normal += 'n';
      }
      else if (d == -99) {
        normal += 'Y';
      }
      else if ((d == -67) || (d == -65)) {
        normal += 'y';
      }
  
      continue;
    }
    if (cond == false) {
      cond = true;
      continue;
    }
    normal += x[i];
  }
  return normal;
}
int main() {
  cout << "Digite a cadeia de caracteres que você quer converter: " << endl;
  string word;
  getline(cin, word); 
  cout << accents_to_noaccents(word) << endl;
  return 0;
}
