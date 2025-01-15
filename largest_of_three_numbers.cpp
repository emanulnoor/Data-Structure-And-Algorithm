 //prgram for  largest of 3 numbers.
#include<iostream> 
using namespace std; 
int largest(int a,int b,int c){
   if(a>b && a>c){
      return a;
   }else if(b>c){
      return b;
   }else {
      return c;
   }
}
int main(){
     cout<<"the largest number is "<<largest(9,4,5)<<endl;
     cout<<"the largest number is "<<largest(4,9,5)<<endl;
     cout<<"the largest number is "<<largest(11,5,9)<<endl;
 return 0;
}
