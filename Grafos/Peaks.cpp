#include <iostream>
#include <vector>

using namespace std; 

int main() {
  int N, M; 
  cin >> N >> M; 

  //vetor para armazenar todas as altitudes
  vector<int> altitudes(N); 
  //vetor para rastrear observatorios bons - inicializa todas as posicoes como 1
  vector<int> observatoriosBons(N, 1); 

  //preenche vetor com as altitudes
  for(int i = 0; i < N; i++){
    cin >> altitudes[i]; 
  }

  for(int i = 0; i < M; i++){
    int A, B; 
    cin >> A >> B;

    //ajusta indices para consultas no vetor de altitude
    A--; 
    B--; 

    if(altitudes[A] <= altitudes[B]){
      observatoriosBons[A] = 0; // A não é bom
    }
    
    if(altitudes[B] <= altitudes[A]){
      observatoriosBons[B] = 0; // B não é bom
    }
  }

  int result = 0; 
  
  for(int i = 0; i < N; i++){
    result += observatoriosBons[i]; 
  }

  cout << result << "\n"; 

  return 0; 
  
}