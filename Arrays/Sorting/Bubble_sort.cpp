#include<iostream>
using namespace std;
int bublesorting(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }
        }   
 }
}
void printing(int arr[],int n){
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=6, arr[n]={9,3,4,2,5,6};
    
    cout<<"BEFORE SORT "<<endl;
    printing(arr,n);
    bublesorting(arr,n);
    cout<<"AFTER SORT "<<endl;
    printing(arr,n);
    
    return 0;
}