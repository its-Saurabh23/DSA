#include<iostream>
#include<math.h>
using namespace std;

int MaximumSubArray(int arr[],int n){
	    int max = arr[0];
	    int min = arr [0];
	    int res = arr [0];
	    for(int i =0; i<n; i++){
	        if(arr[i] == 0);{
	            max =1;
	            min =1;
	            continue;
	        }
	        int temp1 = arr[i]*max;
	        int temp2 =arr[i]*min;
	        max = math.max(temp1,temp2);
	        max = math.max(max,arr[i]);
	        
	        min = math.min(temp1,temp2);
	        min = math.min(min,arr[i]);
	        
	        res = math.max(res,max);
	    }
	    return res;
}
// int MaximumSubArray(int arr[],int n)
// {
//     int Sum = 0;
//     int MaximumSum =arr[0];
//     for(int i =0; i<n; i++){

//        Sum +=arr[i];
//        MaximumSum = max(Sum,MaximumSum);
//       if(Sum<0){
//         Sum = 0;
//       }
//     }
// return MaximumSum;
// }

// int MaximumSubArray(int arr[],int n){
//     int MaxumunSum = 0;
// int CurrentSum = 0;
// for(int i = 0;i<n; i++){

//     CurrentSum = CurrentSum + arr[i];  
//     if(CurrentSum>MaxumunSum){
//         MaxumunSum = CurrentSum;
//     }   
//     if(CurrentSum<0){
//         CurrentSum =0;
//     }
// }
// return MaxumunSum;
// }
int main(){
// int arr[4]= {-1,-2,-3,-4};
int arr [6] = {6,-3,-10,0,2};

int Result = MaximumSubArray(arr,6);
cout<<" Maximum Value in a SubArray is = "<<Result <<endl;
return 0;
}