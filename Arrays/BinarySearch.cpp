#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
   int st=0,end=n-1;
   while(st<=end){
    int mid=(st+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        st=mid+1;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
   }
    return -1; 
}
int main(){
    int arr[]={0,2,3,4,5,6,7,8,9,10,11};
    int n=sizeof(arr)/sizeof(int);
    cout<<BinarySearch(arr,n,15)<<endl;// output -1
    cout<<BinarySearch(arr,n,10)<<endl;// output 9
    cout<<BinarySearch(arr,n,7)<<endl; // output 6
    return 0;
}