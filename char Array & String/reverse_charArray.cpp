#include<iostream>
#include<cstring>
using namespace std;
void reverse(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}
int main(){
    char word[]="ABCDEF";
    reverse(word,strlen(word));
    cout<<" the reverse of word is ="<<word<<endl;
    return 0;
}