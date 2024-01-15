class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        // make a lost map
        unordered_map<int,int>lost_map;

        for(int i = 0;i<matches.size(); i++){
            int loss = matches[i][1];

            lost_map[loss]++;      
        }

        vector<int>winner;
        vector<int>losser;

        for(int i=0;i<matches.size();i++){
            int win = matches[i][0];
            int loss = matches[i][1];

            if(lost_map.find(win) == lost_map.end()){
                 winner.push_back(win);
                
                // for duplicay 
                lost_map[win] = 2;  
            }

            if(lost_map[loss] == 1){
                losser.push_back(loss);
            }
        }
        sort(winner.begin(),winner.end());
        sort(losser.begin(),losser.end());

        return {winner,losser};
    }
};