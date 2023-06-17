#include<bits/stdc++.h>
using namespace std;  
int searchInsert(vector<int>& nums, int target) {    
        int cnt = 0; 
        int s = 0;
        int e = nums.size();
        int mid = s +(e-s)/2;
        for(int i = 0; i<nums.size(); i++){ 
            if(nums[i]<target){
                cnt++;
            }
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] <target){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s +(e-s)/2;
        }
        return cnt;
    }

int main(){

vector<int>nums{1,3,5,6};

int target = 7;
int result = searchInsert(nums,target);

cout<<" "<<result<<endl;
}