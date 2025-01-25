#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void printing(int arr[],int n){
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=6, arr[n]={9,3,8,2,4,6};
    
    cout<<"BEFORE SORT "<<endl;
    printing(arr,n);
    insertionsort(arr,n);
    cout<<"AFTER SORT "<<endl;
    printing(arr,n);
    
    return 0;
}