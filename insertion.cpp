#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0 ;i<n;i++)
    {
        int j = i;
        while(j>0&&(arr[j-1]>arr[j])){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}