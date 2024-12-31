        //program for reverse pattern
#include<iostream> 
using namespace std; 
int main(){
        
        int n=6;
        int i,j;
         for(i=0;i<=n;i++){
            for(j=1;j<=n-i;j++){
                cout<<"*"<<"\t";
            }
            cout<<endl;
        }
     return 0;

}
