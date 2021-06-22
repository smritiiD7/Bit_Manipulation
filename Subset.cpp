#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int arr[3]={4,6,2};
    int size=sizeof(arr),i,j;
    int subsets=8;
    for(i=0;i<subsets;i++)
    {
        for(j=0;j<5;j++)
        { 
         if((i&(1<<j))!=0) //jth bit of i
        cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }
     return 0;
}