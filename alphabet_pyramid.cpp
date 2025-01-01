        
        //print char through loops
#include<iostream> 
using namespace std; 
int main(){
        
        
           int n=5,i,j;
           char ch='A';

           for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<ch;
                ch++;
            }
            cout<<endl;
           }
     return 0;

}
