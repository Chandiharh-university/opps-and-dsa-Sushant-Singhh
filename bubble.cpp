#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter sizze of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = n-1;i>=1;i--){
       
        for(int j = 0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
             int temp = arr[j+1];
             arr[j+1]=arr[j];
             arr[j]=temp;
             cout<<arr[j]<<" ";
            }
        }
        
    }
    cout<<"Arrray after sorting: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}