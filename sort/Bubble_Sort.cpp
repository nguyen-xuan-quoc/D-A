#include<iostream>

using namespace std;

void bubbleSort(int a[], int n){
    for(int i = n-1; i >= 1; i--){
        bool swapped = true;
        for(int j = 0; j < i; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                swapped = false;
            }
        }
        if(swapped){
            break;
        }
    }
}

/*void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already 
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}*/

void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int a[100001];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubbleSort(a, n);
    printArray(a, n);
    return 0;
}