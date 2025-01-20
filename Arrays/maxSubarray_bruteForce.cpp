#include<iostream>
using namespace std;

void maxsubarray(int arr[],int n){
    int maxsum=INT8_MIN;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int cursum=0;
            for(int i=st;i<=end;i++){
                cursum+=arr[i];
            }
            cout<<cursum;
            cout<<" ";
            maxsum=max(maxsum, cursum);
        }
        cout<<endl;
    }
   cout<<"MAXIMUM SUM OF SUBARRAY is = "<<maxsum;
}

int main(){
    int n=5;
    int arr[n]={0,1,2,3,4};
    maxsubarray(arr,n);
    return 0;
}
