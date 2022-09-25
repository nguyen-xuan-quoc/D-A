#include<iostream>

//tinh e^x = 1 + x/(1!) + x^2/(2!) + ... + x^x/(n!)

using namespace std;

double solve(float x, float n){
    float sum = 1;
    float p = 1;
    for(int i = 1; i <= n; i++){
        p = p*(x/i);
        sum = sum + p;
    }
    return sum;
}

int main(){
    float n, x;
    cin >> x >> n;
    cout << solve(x, n) << endl;
    return 0;
}