#include<iostream> 
using namespace std; 
int main(){
    int n;
    cout<<" enter the value for n ";
    cin>>n;
    int arr[n];
    //for input
    for(int i=0;i<n;i++){
        cout<<"Enter the value for index "<<i<<" ";
        cin>>arr[i];    
    }
    //for  printing
    for(int i=0;i<n;i++){
        cout<<" The value at the index "<<i<<"  ";
        cout<<arr[i]<<endl;
    }
   return 0;
}   
