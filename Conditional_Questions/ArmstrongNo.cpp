// program for checking armstrong number

#include<iostream>
using namespace std;
int main(){
         int num1;
         cout<<"entre the three digit number";
         cin>>num1;
           int num=num1;
          int dig1=num%10;   // getting last digit
          num/=10;           // remove last digit
          int dig2=num%10;   // getting 2nd last digit
          num/=10;           //remove 2nd digit
          int dig3=num%10;   //getting 1 digit

          int cubesum= dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;

          if(cubesum==num1){
            cout<<" the num "<<num1<<" is armstrong number "<<endl;
          }
          else{
            cout<<" the num "<<num1<<" is not a armstrong number"<<endl;
          }
          return 0;
}
