// T.C log(n) + o(n)
//     B.S     isPossibleTrips Function 

class Solution {
public:
   bool isPossibleTrip(vector<int>&time,long long currTime,int totalTrips)
   {    
       long long NumberOfTrips = 0;
       
       for(auto &it : time){
        NumberOfTrips +=  currTime/it;
       }
       return NumberOfTrips  >= totalTrips;

   }

    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long low = 1;
        long long high = (long long) *min_element(begin(time),end(time))*totalTrips;

    while(low<high){
        long long mid = low +(high-low)/2;

        if(isPossibleTrip(time,mid,totalTrips)){
            high = mid;
        }
        else{
            low = mid+1;
        }
    } 
    return low;

    }
};