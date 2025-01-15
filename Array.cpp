//Program for size of array and printing values of the index
#include<iostream>
using namespace std;
int main(){
    int marks[5]={2,3,7,8,9};
    cout<<"Value at index 0= "<<marks[0]<<endl;
    cout<<"Value at index 1= "<<marks[1]<<endl;
    cout<<"Value at index 2= "<<marks[2]<<endl;
    cout<<"Value at index 3= "<<marks[3]<<endl;
    cout<<"Value at index 4= "<<marks[4]<<endl;

    //for the size of the array
    cout<<"The size of the array is= "<<sizeof(marks)/4<<endl;

    return 0;
}
