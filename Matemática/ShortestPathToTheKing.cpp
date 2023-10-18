#include <bits/stdc++.h>
using namespace std; 

int main() {
  string partida, destino; 
  cin >> partida >> destino; 

  int diferencaHorizontal, diferencaVertical; 
  diferencaHorizontal = partida[0] - destino[0];
  diferencaVertical = partida[1] - destino[1]; 

  int diferencaMaior = max(abs(diferencaHorizontal), abs(diferencaVertical)); 
  cout << diferencaMaior << endl; //a quantidade minima de passos se trata da maior distancia adjacente

  char direcaoHorizontal, direcaoVertical; 
  if(diferencaHorizontal > 0)
    direcaoHorizontal = 'L'; 
  else
    direcaoHorizontal = 'R'; 

  if(diferencaVertical > 0)
    direcaoVertical = 'D'; 
  else 
    direcaoVertical = 'U'; 

  int passosDiagonais = min(abs(diferencaHorizontal), abs(diferencaVertical)); 
  for(int i = 0; i < passosDiagonais; i++) {
    cout << direcaoHorizontal << direcaoVertical << endl; 
  }

  char direcaoFinal; 
  if(abs(diferencaHorizontal) > abs(diferencaVertical))
    direcaoFinal = direcaoHorizontal; 
  else
    direcaoFinal = direcaoVertical; 

  diferencaMaior -= passosDiagonais; 
  while(diferencaMaior--){
    cout << direcaoFinal << endl; 
  }
  
}