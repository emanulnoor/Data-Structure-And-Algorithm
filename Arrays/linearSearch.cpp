#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;
}
int main(){
    int arr[5]={10,11,12,25,29};
    int n=sizeof(arr)/sizeof(int);
     cout<<linearsearch(arr,n,25);
    return 0;
}