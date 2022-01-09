// Question-1..
#include<iostream>
using namespace std;

int missingNumber(int arr[], int n){
    int calSum =0; 
       for(int i=0; i<n; i++){
           calSum += arr[i];
       }
       int arrSum = ((n+1)*n)/2;
       if(arrSum== calSum){
           return 0;
       }
       else{
           return arrSum - calSum;
       }
}
int main(){
    int num[] = {3, 0,1};
    int n = (sizeof(num))/(sizeof(int));
    cout<<"Missing number is "<<missingNumber(num, n)<<endl;
   return 0;
 }

