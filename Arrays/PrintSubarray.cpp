#include<iostream>
using namespace std;
void prrsubarray(int arr[],int n){
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            //for only printing starting and ending of subarray
            cout<<"("<<st<<","<<end<<")"<<" ";
            //for printing all subarray
            // for(int i=st;i<=end;i++){
            //     cout<<arr[i];
           // }
            //cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    prrsubarray(arr,n);
    return 0;
}