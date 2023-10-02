//1 sort then
//2 and match them taht every prevous element is equla to next one because it is consecutivemanner
// store the count and 
// take the maximun  when you are doing fresh start . 


int longestSuccessiveElements(vector<int>&a) {
    // edge case 
    if(a.size() == 0)
        {
            return 0;
        }
    sort(a.begin(),a.end());

    int cnt = 1;  // for  currentCount storage 
    int length = 1;  // for maximum count storage 

   for(int i = 1; i<a.size(); i++){
      if(a[i] == a[i-1]+1){
          length++;
      }
      else if(a[i] != a[i-1])
      {
         // fresh start 
        cnt = max(cnt,length);
        length = 1;
      }
   }

   cnt = max(cnt,length);
   return cnt;
}

// Through Unordered_set;

/* 
int longestConsecutive(vector<int>& nums) {

    int n = nums.size();
    if(n == 0) return 0;
    int length = 1;
    unordered_set<int>st;
  
  // step 1 inserting the elemtn in set 
    for(int i = 0; i<n; i++){
        st.insert(nums[i]);
    }    
    // iterate the set

    for(auto it: st){
      
      if(st.find(it-1) == st.end() ){
          int cnt = 1;
          int x = it;

          while(st.find(x+1) != st.end()){
              x = x+1;
              cnt = cnt+1;
          }
          length = max(length,cnt);
      }

    }
    return length;
    }
*/