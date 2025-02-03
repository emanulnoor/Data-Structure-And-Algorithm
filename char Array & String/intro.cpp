
#include<iostream>
#include<string>
using namespace std;
int main(){
string str1="DSA ";
string str2="In C++";
//concatenation
string str3=str1+str2;
// cout<<str3<<endl;
//printing using each loop
for(char ch: str3){
    cout<<ch;
}
//for checking if str1 = or != to str2
cout<<(str1==str2)<<endl; //output false ..0
//for the length
cout<<"the length of str1= "<<str1.length()<<endl; //4
cout<<"the length of str2= "<<str2.length()<<endl; //6
    return 0;
}
