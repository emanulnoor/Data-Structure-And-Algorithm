#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
            
        }
        swap(arr[i],arr[minidx]);
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
    selectionsort(arr,n);
    cout<<"AFTER SORT "<<endl;
    printing(arr,n);
    
    return 0;
}