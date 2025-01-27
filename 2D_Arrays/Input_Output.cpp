//for input and output
#include<iostream>
using namespace std;
int main(){

    int n=4,m=2;
    int student[n][m];
//={{10,20},{30,40},{50,60},{70,80}};
        cout<<"ENTER THE VALUES "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           
            cin>>student[i][j];
        }
    }
        cout<<"THE VALUES "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<student[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }