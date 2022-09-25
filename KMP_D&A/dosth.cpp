#include <iostream>

using namespace std;

int solve(int n, int k){
    if(k == 0 || k == n){
        return 1;
    }
    return solve(n - 1, k) + solve(n - 1, k-1);
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
    return 0;
}