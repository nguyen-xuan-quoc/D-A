#include<iostream>

using namespace std;

double solve(float x, float n){
    float p = 1;
    float sum = x;
    for(int i = 1; i <= n; i++){
        p = p*x/i;
        if(i > 1 && i % 2 == 1){
            p = (-1)*p;
            sum = sum + p;
        }
    }
}

int main(){
    float x, n;
    cin >> x >> n;


    return 0;
}