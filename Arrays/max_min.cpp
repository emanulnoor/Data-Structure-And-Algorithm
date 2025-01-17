#include<iostream>
using namespace std;
int main(){
    int arr[5]={8,9,4,1,10};
    int n=sizeof(arr)/sizeof(int);
    //for max
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"THE maximum value in array is "<<max<<endl;

    //for min
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"THE minimum value in array is "<<min<<endl;

    return 0;
}
