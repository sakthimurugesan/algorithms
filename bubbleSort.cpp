#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    bubbleSort(arr,10);
    for(int c:arr)
    cout<<c<<" ";
}