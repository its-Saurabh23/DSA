   /*
   vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int n = intervals.size();
       // sort 
       sort(intervals.begin(),intervals.end());

       vector<vector<int>> ans;
      for(auto it: intervals){
          
          if(ans.empty() || ans.back()[1]<it[0]){
            
            // if it not ovarlapping than new one form 
              ans.push_back(it);
          }
          else{
            // if is in overlapping 
              ans.back()[1] = max(ans.back()[1],it[1]);
          }
      }
    return ans;

    }
    */