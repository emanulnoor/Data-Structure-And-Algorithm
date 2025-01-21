#include<iostream>
using namespace std;
//KADANE-s algorithm
 void maxsubarrayKA(int arr[],int n){
    int maxsum=INT8_MIN;
     int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
        
    }
    cout<<"MAXIMUM SUM SUBARRAY IS = "<<maxsum;

 }
int main(){
    int n=5;
    int arr[n]={1,-2,-3,4,-5};
    maxsubarrayKA(arr,n);
    return 0;
}
