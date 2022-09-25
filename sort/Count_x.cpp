#include<iostream>

using namespace std;

int a[10001];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(x == a[i]){
            count++;
        }
    }
    cout << count;
    return 0;
}