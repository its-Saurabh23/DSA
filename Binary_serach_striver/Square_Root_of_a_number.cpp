int floorSqrt(int n)
{
int low = 1, high =n;
 
while(low<=high){
    long long mid = (low+high)/2;
    long long val = (mid*mid);

    if(val<=n){
        low = mid +1;
    }
    else{
        high = mid-1;
    }
}
return high;

}

// To overcome the overflowconditon
class Solution {
public:
    int mySqrt(int x) {

        if(x<2){
            return x;
        }
        int start = 1,end = x,ans,mid;

        while(start<=end){
            mid = start + (end-start)/2;

            if(mid == x/mid){
                return mid;
            }
            else if(mid<x/mid){
                // may be a potential ans
                ans = mid; 
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
};
