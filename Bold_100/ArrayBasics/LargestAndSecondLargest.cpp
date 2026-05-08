/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;


int SecondMAximum(vector<int>nums){
   int firstMaximum =  INT_MIN;
   int secondMaximum = INT_MIN;
   
   for(int i =0;i<nums.size(); i++){
       
       if(nums[i]>firstMaximum){
           secondMaximum = firstMaximum;
           firstMaximum = nums[i];
       }else if(nums[i]>secondMaximum && nums[i] != firstMaximum){
           secondMaximum = nums[i];
       }
   }
   return secondMaximum;
}





int main()
{
    vector<int>nums = {1,2,3,4,5};
     int result = SecondMAximum(nums);
     std::cout << result << std::endl;

    return 0;
}
