// Quesion->1>>>>>>>>>>>> 
// #include<iostream>
// using namespace std;

// int missingNumber(int arr[], int n){
//     int calSum =0; 
//        for(int i=0; i<n; i++){
//            calSum += arr[i];
//        }
//        int arrSum = ((n+1)*n)/2;
//        if(arrSum== calSum){
//            return 0;
//        }
//        else{
//            return arrSum - calSum;
//        }
// }
// int main(){
//     int num[] = {3, 0,1};
//     int n = (sizeof(num))/(sizeof(int));
//     cout<<"Missing number is "<<missingNumber(num, n)<<endl;
//    return 0;
//  }

// Ques->2>>>>
#include<iostream>
using namespace std;

int reqSum(int arr[], int n, int target){
    // int n= nums.size();
    int sum=0;
    int a[n];
   for(int i=0; i<n; i++){
    sum = arr[i]+ arr[(i+1)%n]+ arr[(i+2)%n];
    a[i]= sum;
   }
   int m= INT_MAX;
   for(int i=0; i<n; i++){
     if(abs(a[i]-target)< m){
         m= a[i];
     }
   }
   return m;
}
int main(){
        int nums[] = {-1, 2, 1, -4};
        int n= (sizeof(nums))/ (sizeof(int));
        int target;
        cout<<"Enter target"<<endl;
        cin>>target;
        cout<<"Sum is "<<reqSum(nums, n, target);
   return 0;
 }










