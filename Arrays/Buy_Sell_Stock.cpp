// //program for buy and sell stock 
#include<iostream>
using namespace std;
void maxprofit(int prices[],int n){
int bestbuy[100];
bestbuy[0]=INT8_MAX;
//cout<<bestbuy[0]<<" ";
for(int i=1;i<n;i++){

   bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
   //for printing all best buying prices
    //cout<<bestbuy[i]<<" ";
}

//cout<<endl;

//for finding max profit
int maxprofit=0;

for(int i=1;i<n;i++){
int currprofit=prices[i]-bestbuy[i];
maxprofit=max(currprofit,maxprofit);
}
cout<<" max profit is "<<maxprofit;
}

int main(){
    int n=6;
    int prices[6]={7,1,5,3,6,4};
    maxprofit(prices,n);
    return 0;
}