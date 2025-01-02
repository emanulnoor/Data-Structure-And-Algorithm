       //program for finding the factorial
#include<iostream>
using namespace std;
int main(){

          int num,i;
          cout<<" entre the num ";
          cin>>num;
          int fact=num;
        {
            for(i=1;i<num;i++){
                fact=fact*i;
            }
        }
        cout<<" the factorial of the num "<<num<<" is "<<fact;
    return 0;
}
