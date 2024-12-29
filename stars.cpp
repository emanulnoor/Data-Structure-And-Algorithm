         //program for printing star in this pattern
         //*
         //** 
         //*** 
         //****

#include<iostream> 
using namespace std; 
int main(){
         int n=6;
         int i,j;
         for(i=2;i<=n;i++){
            for(j=1;j<=i-1;j++){
                cout<<"*"<<"\t";
            }
            cout<<endl;
        }
     return 0;

}
