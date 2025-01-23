//program for traped water
#include<iostream>
using namespace std;
int trappedwater(int height[],int n){
    int leftmax[200],rightmax[200];
     leftmax[0]=INT8_MIN;
     rightmax[n-1]=INT8_MIN;
     //for left max
     cout<<"The values of left max "<<endl;
     for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
        cout<<leftmax[i]<<" ";
     }
     cout<<endl;
     //for right max
     cout<<"The values of right max "<<endl;
     for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
        cout<<rightmax[i]<<" ";}
     int trappedwater=0;
     for(int i=0;i<n;i++){
     int currentwater=min(leftmax[i],rightmax[i])-height[i];
     if(currentwater>0){
        trappedwater+=currentwater;
     }}
     cout<<endl;
     cout<<"The trap water = "<<trappedwater;
}
int main(){
    int n=7;
    int height[7]={4,2,0,6,3,2,5};
    trappedwater(height,n);
    return 0;
}