        
//Print the Palindromic Pattern with Numbers

#include<iostream> 
using namespace std; 
int main(){
        
        int n=9;
        for(int i=1;i<=n;i++)
        {
          //loop for spaces
          for(int j=1;j<=n-i;j++)
          {
            cout<<" ";
          }
               //loop for digits     
               for(int j=i;j>=1;j--)
               {
                cout<<j;             
               }
               //loop for digit 
               for(int j=2;j<=i;j++){
                cout<<j;
               }
             cout<<endl;
        }

     return 0;

}
