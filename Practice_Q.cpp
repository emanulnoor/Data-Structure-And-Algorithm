  
                       //CONDITIONAL STATEMENT QUESTIONS
#include<iostream>
using namespace std;
int main(){


        // program to check num is positive negative or is equal to zero using else if
        int num;
        cout<<"ENTER A NUMBRR  ";
        cin>>num;

        if(num>0){
            cout<<" THE NUM "<<num<<" is positive"<<endl;
        }
        else if(num<0){
            cout<<"THE NUM IS "<<num<<" is negative "<<endl;
        }
        else{
            cout<<" THE NUM IS EQUAL TO ZERO "<<num<<endl;
        }

         // program to check num is positive negative or is equal to zero using switch
        // int num;
        // cout<<"entre the number "<<endl;
        // cin>>num;
        // int value=(num>0)?1:(num<0)?-1:0;

        // switch (value)
        // {
        //     case 1:cout<<" the number is positive"<<endl;
        //     break;
        //     // case(num<0)
        //     // cout<<"the number is negative"<<endl;
        //     // break;
        //     case -1:cout<<" the num is neagtive"<<endl;
        //     break;
        //     default:
        //     cout<<" the number is zere";

        // }

         // program for checking it is leap year or not
        // int year;
        // cout<<"ENTER THE YEAR ";
        // cin>>year;

        // if(year%400==0){
        //     cout<<" the year is leap year"<<endl;
        // }
        // else if(year%4==0){
        //     cout<<" the year is leap year"<<endl;
        // }
        // else{
        //     cout<<" the year is not a leap year";
        // }

        
    return 0;

}
