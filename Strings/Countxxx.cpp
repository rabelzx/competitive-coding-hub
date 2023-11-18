#include <iostream>
#include <vector>
#include <algorithm> // Adiciona esta linha para incluir a biblioteca <algorithm>

using namespace std;

// Definição da struct
struct CaractereInfo {
    char letra;
    int maiorSequencia;

    CaractereInfo(char c, int sequencia) : letra(c), maiorSequencia(sequencia) {}
};

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<CaractereInfo> infoCaracteres; // Vetor para armazenar as informações de cada caractere

    int comprimento = 1;

    for (int i = 0; i < n; i++) {
        if (i < n - 1 && s[i] == s[i + 1]) {
            comprimento++;
        } else {
            // Verifica se o caractere já está no vetor
            auto it = find_if(infoCaracteres.begin(), infoCaracteres.end(),
                              [c = s[i]](const CaractereInfo& info) { return info.letra == c; });

            if (it != infoCaracteres.end()) {
                // Se o caractere já existe, atualiza a maior sequência
                it->maiorSequencia = max(it->maiorSequencia, comprimento);
            } else {
                // Se o caractere não existe, adiciona ao vetor
                infoCaracteres.push_back({s[i], comprimento});
            }

            comprimento = 1;
        }
    }

   /* // Imprime as informações de cada caractere
    for (const auto& info : infoCaracteres) {
        cout << "Letra: " << info.letra << ", Maior Sequencia: " << info.maiorSequencia << endl;
    }*/

    // Calcula o número total de substrings
    int totalSubstrings = 0;
    for (const auto& info : infoCaracteres) {
        totalSubstrings += info.maiorSequencia ;
    }

    cout << totalSubstrings << endl;

    return 0;
}
