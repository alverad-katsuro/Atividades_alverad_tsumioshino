#include <iostream>
#include <string>

using namespace std;


/*
Alfredo Gabriel de Sousa Oliveira
Marcus Maciel Oliveira
Escreva uma função em C que retorna verdadeiro se uma cadeia de caracteres enviada como parâmetro é um palíndromo. 
Um palíndromo é uma cadeia que é igual à sua inversa.
*/

string inverte_string(string palavra) {
    int i = palavra.length();
    string palavra_temp;
    for (i >= 0 ; i--;){
        palavra_temp += palavra[i];
    }
    return palavra_temp;
};

bool compara(string palavra, string palavra_invertida){
    int len = palavra.size();
    bool palindromo = true;
    for (len >= 0; len--;){
        /*
        cout << "palavra: " << palavra[len] << " invrt: " << palavra_invertida[len] << "\n";
        cout << (palavra[len] != palavra_invertida[len]) << "\n";
        */
        if (palavra[len] != palavra_invertida[len]){
            palindromo = false;
            break;
        }
    }
    return palindromo;
};

string stripando_string(string palavra){
    int k;
    int size = palavra.length();
    string palavra_stripada;
    for (k = 0; k < size ; k++){
        if (palavra[k] != 20){
            palavra_stripada += palavra[k];
        }
    }
    /*cout << "A palavra é: " << palavra_up;*/
    return palavra_stripada;
};

string uppercase_for_string(string palavra){
    int k;
    int size = palavra.length();
    string palavra_up;
    for (k = 0; k < size ; k++){
        if (palavra[k] >= 97 && palavra[k] <= 122){
            palavra_up += (palavra[k] -32);
        } else {
            palavra_up += palavra[k];
        }
    }
    /*cout << "A palavra é: " << palavra_up;*/
    return palavra_up;
};

int main() {
    string palavra;
    string palavra_invertida;
    string palavra_ori;
    bool palindromo;
    cout << "Digite uma palavra: ";
    getline(cin, palavra);
    palavra_ori = palavra;
    palavra = stripando_string(palavra);
    palavra = uppercase_for_string(palavra);
    palavra_invertida = inverte_string(palavra);
    palindromo = compara(palavra, palavra_invertida);
    if (palindromo){
        cout << palavra_ori << " é um Palíndromo\n";
    } else {
            cout << palavra_ori << " não é um Palíndromo\n";
    }
};
