#include<iostream>
using namespace std;
void selectionSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    selectionSort(arr,10);
    for(auto i:arr)
    cout<<i<<" ";
}