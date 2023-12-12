// T.C  O (lon n+m)
// S.C  O (lon n+m)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;

        int i,j =0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i++]);
            }
            else{
                ans.push_back(nums2[j++]);
            }
        }
        while(i<nums1.size()){
            ans.push_back(nums1[i++]);
        }
        while(j<nums2.size()){
            ans.push_back(nums2[j++]);
        }
       int mid = ans.size()/2;

       if(ans.size()%2 == 0){
           return (ans[mid-1] + ans[mid])/2.0;
       }
       else{
           return ans[mid];
       }
         
    }
};