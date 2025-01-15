//         Write a function that accepts a character (ch) as parameters & returns 
// the character that occurs after ch in the English alphabet. 
// Eg : input = ‘c’, return value = ‘d’ 
// Note : for ch = ‘z’, return ‘a’.

#include<iostream> 
using namespace std; 
void alphabets(){
char abc;
cout<<"enter a alphabet"<<endl;
cin>>abc;
if(abc=='z'){
   abc='a';
}else{
   abc++;
}
cout<<abc;
}
int main(){
      alphabets();
 return 0;
}
