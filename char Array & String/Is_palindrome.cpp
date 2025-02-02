#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(word[st]!=word[end]){
            cout<<" THE WORD "<<word<<" IS NOT PALINDROME"<<endl;
            return false;
        }
        st++;
        end--;
    }
    cout<<" THE WORD "<<word<<" IS PALINDROME"<<endl;
            return true;
}
int main(){
    char word[]="racecar";
    ispalindrome(word,strlen(word));
     char word2[]="abcdef";
    ispalindrome(word2,strlen(word2));
    return 0;
}
