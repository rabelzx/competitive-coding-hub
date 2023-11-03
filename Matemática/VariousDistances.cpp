#include <bits/stdc++.h>
using namespace std;

long long manhattan(vector<long long> nums, int n){
    long long sum = 0; 
    for(int i = 0; i < n; i++){
        sum += abs(nums[i]);
    }
    return sum;
}

double euclidean(vector<long long> nums, int n) {
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += abs(nums[i]) * abs(nums[i]);
    }
    return sqrt(sum);
}

int chebyshev(vector<long long> nums, int n){
    int max = 0; 
    for(int i = 0; i < n; i++){
        if(abs(nums[i]) > max){
            max = abs(nums[i]);
        }
    }
    return max;
}

int main(){
    int n; 
    cin >> n; 
    vector<long long> nums(n); 

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << manhattan(nums, n) << endl;
    cout << fixed << setprecision(15) << euclidean(nums, n) << endl;
    cout << chebyshev(nums, n) << endl;

    return 0; 
}