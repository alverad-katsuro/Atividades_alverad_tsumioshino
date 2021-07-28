/*
Alfredo Gabriel
Marcus Marciel
Questão 2 (0.3 pt):
Escreva uma função que recebe uma cadeia de caracteres s e t e decida se s é um segmento de t.
Também escreva uma função para contar o número de ocorrências da cadeia de caracteres s em t.
*/
#include <iostream>
#include <string>
using namespace std;

int comparar_cadeias(string s, string t) { //talvez poderia usar bool como valor de retorno
  int all_ch_same = 0; //variável para controlar s quando tiver ocorrência em t
  for (int i = 0; i <= (t.length()-1); i++) { //loop pelo tamanho de t - 1 (controle de index já que tem o 0)
    if (t[i] == s[all_ch_same]) { 
      all_ch_same += 1; //caso a letra de s seja igual à de t, vai somando +1
      if (all_ch_same == (s.length())) { //caso a soma dê  igual ao tamanho de s, significa que já percorreu tudo de s
        return 1; //Se já tiver NO MÍNIMO uma ocorrência, já é condição o suficiente para dizer que s é um segmento de t  
      }
    }
    else {
      all_ch_same = 0; //caso s tenha letras em comum com t, mas não seja um segmento, garante que retorna à primeira letra de s.
      if (t[i] == s[all_ch_same]) {
        all_ch_same += 1;
      }
    }
  }
  return 0; //false
}

int contar_ocorrencias(string s, string t) { //talvez poderia usar bool como valor de retorno
  int all_ch_same = 0; //controlar s em relação a t
  int countt = 0; //guardar numero de repetições
  for (int i = 0; i <= t.length(); i++) {
    if (t[i] == s[all_ch_same]) {
      all_ch_same += 1;
      if (all_ch_same == s.length()) {
        all_ch_same = 0;
        countt += 1; //
      }
    }
    else {
      all_ch_same = 0;
      if (t[i] == s[all_ch_same]) { //tem que fazer isso por causa que se essa letra não é a letra x de uma sequencia y, ele pode desconsiderar a letra w de uma sequencia z que potencialmente pode ser um segmento
        all_ch_same += 1;
      }
    }
  }
  return countt; 
}

int main() {
  string s, t;
  cout << "Digite a cadeia de caracteres 's': " << endl;
  getline(cin, s);
  cout << "Digite a cadeia de caracteres 't': " << endl;
  getline(cin, t);
  if (comparar_cadeias(s, t)) {
    cout << "'s' é um segmento de 't'" << endl;
    cout << "'s' ocorreu " << contar_ocorrencias(s, t) << " vez(es) em 't'" << endl;
  }
  else {
    cout << "'s' não é um segmento de 't'";
  }
return 0;
}