#include<iostream>

using namespace std;

// Cos(x) = 1 - x^2/(2!) + x^4/(4!) + ... + (-1)^n * x^(2n)/(2n)!

float solve(float x, float n){
    float p = 1;
    float sum = 1;
    for(int i = 1; i <= n; i++){
         p = p*x/(i);
         if(i%2==0){
            p = (-1)*p;
            sum = sum + p;
         }
    }
    return sum;
}

int main(){
    float x, n;
    cin >> x >> n;
    cout << solve(x, n);
    return 0;
}