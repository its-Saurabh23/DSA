int m = mat.size();
        int n = mat[0].size();

        map<int,vector<int>>mp;
        vector<int>ans;
        // insert into map
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                // for digonally upword use [i+j]
                mp[i+j].push_back(mat[i][j]);
            }
        }
       
    //    for togal 
    bool flag  = true;
    for(auto &it:mp){
       if(flag){
        reverse(it.second.begin(),it.second.end());
       }
     
    // filling up the ans vector
      for(auto &num: it.second){
        ans.push_back(num);
      } 
    // revert the flip
    flag != flag;
    }
    return ans;