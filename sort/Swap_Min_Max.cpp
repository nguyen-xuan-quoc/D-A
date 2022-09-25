#include<iostream>

using namespace std;

int searchMax(int a[], int n){
    int k = n - 1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] > a[k]){
            k = i;
        }
    }
    return k;
}

int searchMin(int a[], int n){
    int k = 0;
    for(int i = 1; i <n; i++){
        if(a[i] < a[k]){
            k = i;
        }
    }
    return k;
}

void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

int a[100001];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int csMin = searchMin(a, n);
    int csMax = searchMax(a, n);
    swap(a[csMax], a[csMin]);
    printArray(a, n);
    return 0;
}