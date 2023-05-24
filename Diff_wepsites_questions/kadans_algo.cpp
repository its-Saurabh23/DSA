#include<bits/stdc++.h>
using namespace std;
/* 
int maxiSubArray(int arr[],int n)
//  It will take N*N*N Time Complexity to complete;
{
int maximum = INT_MIN;
 for(int i= 0; i<n; i++)
 {
    for(int j =i; j<n; j++)
    {
        int sum = 0;
        for(int k = i; k<=j; k++)
        {
            sum = sum+arr[k];
            maximum = max(sum,maximum);
        }
    }
 }
 return maximum;
} 


// IT will Take N*N Time Complexity To complete;

int maxiSubArray(int arr[],int n)
{
    int maxi = INT_MIN;
 for(int i =0; i<n;i++)
 {
    int sum =0;
    for(int j =i;j<n ;j++)
    {
        sum = sum+arr [j];
        maxi = sum;
    }
 }
 return maxi;
}

*/
// Kadans Algo..Comes Under the Battle..
// Time complexity  is O(N) 
// Space Complexity in All 3 Cases are eual That is O(1)
int maxiSubArray(int arr[],int n)
{
    int  sum = 0;
    int maxi =INT_MIN;
// For Printing AMxi sum Array; 
    int ans_start =-1;
    int ans_end=-1;
    for(int i = 0; i<n; i++)
    {
        if(sum == 0)
        {
          ans_start =i;        
        }
        sum = sum + arr[i];
        if(sum>maxi)
        {     
        maxi = sum;
        ans_end = i; 
        }
        
        if(sum<0)
        { 
            sum = 0;
        }
    }
    cout<<"Maximum is "<<maxi<<endl;
    for(int i = ans_start; i <=ans_end; i++){
        cout<<" "<<arr[i];
    }
    // return maxi;
}
int main(){
 

int arr[]={-2,-3,4,-1,-2,1,5,-3};
int n = 8;
maxiSubArray(arr,n);
// cout<<"MAximum value of sub array "<<res<<endl;

    return 0;
}