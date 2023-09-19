#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int n[]={9,8,7,6,5,4,3,2,1,0};
    insertionSort(n,10);
    for(int c:n)
    cout<<c<<" ";
    
}