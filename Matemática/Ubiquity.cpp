#include <bits/stdc++.h>
using namespace std;

long long potencia(int x, int y){
    if(y == 0)
        return 1;
    else if(y == 1)
        return x;
    else
        return x * potencia(x, y - 1);
}

int main(){
      

}