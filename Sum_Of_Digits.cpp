 //program for sum of the digit of numbers using function e.g if we enter 34 output will be 7
#include<iostream> 
using namespace std; 

int sumofdigit(int n){
   int result=0;
   while(n>0){
      int lastdigit=n%10;
      result=result+lastdigit;
      n=n/10;
   }
   return result;
}
int main(){
      cout<<sumofdigit(34)  ;
     
 return 0;
}
