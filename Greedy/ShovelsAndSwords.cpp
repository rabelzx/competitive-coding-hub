#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    while(n--){
        int gravetos, diamantes;
        cin >> gravetos >> diamantes;
        int esmeraldas = min ({gravetos, diamantes, (gravetos + diamantes) / 3});
        cout << esmeraldas << endl;
    }

    return 0;
}

/*int main(){
    int n; 
    cin >> n;

    while(n--){
        int gravetos, diamantes; 
        cin >> gravetos >> diamantes;

        int esmeraldas = 0;
        while(gravetos + diamantes > 2 && gravetos > 0 && diamantes > 0){
            if(gravetos < diamantes){
                //faço uma espada
                gravetos -= 1; 
                diamantes -= 2;
                esmeraldas++; 
            } else if(gravetos > diamantes){
                //faço uma pá
                gravetos -= 2;
                diamantes -= 1;
                esmeraldas++;
            } else{
                //se eu possuir a mesma quantidade posso fazer qualquer um
                gravetos -= 1; 
                diamantes -= 2;
                esmeraldas++; 
            }
        }

        cout << esmeraldas << endl;
    }

    return 0;
}*/