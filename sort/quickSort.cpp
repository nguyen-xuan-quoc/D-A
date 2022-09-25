#include <bits/stdc++.h>

using namespace std; 

int partition2(int a[], int l, int r) {
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while(1){
        do{
            ++i;
        }while(a[i] < pivot);
        do{
            --j;
        }while(a[j] > pivot);
        if(i < j){
            swap(a[i], a[j]);
        } else return j;
    } 
}

void quickSort(int a[], int l, int r){
    if(l >= r) return;
    int p = partition2(a, l, r);
    quickSort(a, l, p);
    quickSort(a, p + 1, r);
}


int main(){
    int n, a[1001], b[10001];
    cin >> n;
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        a[i] = rand() % 1000;
    }

    int k = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            b[k] = a[i];
            k++;
        }
    }

    quickSort(b, 0, k-1);

    k = 0;

    for(int i = n-1; i >= 0; i--){
        if(a[i] < 0){
            a[i] = b[k];
            k++;
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            a[i] = b[k];
            k++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}