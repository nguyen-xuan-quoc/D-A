#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(a*b == 0) return a+b;
	if(a>b) return gcd(a%b, b);
	if(b>a) return gcd(a, b%a);
}

long long fibo(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	return fibo(n-1) + fibo(n-2);
}

int main(){
	int n;
	//cin >> n;
	//cout << fibo(n) << endl;
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}