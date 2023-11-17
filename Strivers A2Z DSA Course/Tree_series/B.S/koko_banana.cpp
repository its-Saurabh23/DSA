class Solution {
public:
    long long time(vector<int>&piles,int mid){
        long long cnt = 0;

        for(int i =0;i<piles.size();i++){

          cnt += (piles[i]/mid) + (piles[i]%mid != 0);    
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

    int low = 1;
    int high =*max_element(piles.begin(),piles.end());

      while(low<=high)
      {
        int mid = low + (high-low)/2;
        
        if(time(piles,mid)<=h)
        {
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
      }   
      return low;
    }
};