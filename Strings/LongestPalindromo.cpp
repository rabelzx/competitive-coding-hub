#include <iostream>
#include <string>

using namespace std;

int expandirAoRedorDoCentro(const string& s, int esquerda, int direita) {
    while (esquerda >= 0 && direita < s.length() && s[esquerda] == s[direita]) {
        esquerda--;
        direita++;
    }
    return direita - esquerda - 1;
}

int maiorSubstringPalindromo(const string& s) {
    int comprimentoMaximo = 0;
    int inicio = 0;
    for (int i = 0; i < s.length(); i++) {
        int len1 = expandirAoRedorDoCentro(s, i, i);
        int len2 = expandirAoRedorDoCentro(s, i, i + 1);
        int len = max(len1, len2);
        if (len > comprimentoMaximo) {
            comprimentoMaximo = len;
            inicio = i - (len - 1) / 2;
        }
    }
    return comprimentoMaximo;
}

int main() {
    string entrada;
    cin >> entrada;

    int resultado = maiorSubstringPalindromo(entrada);
    cout << resultado << endl;

    return 0;
}
