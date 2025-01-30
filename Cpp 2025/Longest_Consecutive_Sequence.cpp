class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(),nums.end());
        int longestStreak = 0;

        for(int num:numset){
            if(numset.find(num - 1) == numset.end() ){
                int currentNum = num;
                int currentStreak = 1;

                while(numset.find(currentNum + 1) != numset.end()){
                  currentNum++;
                  currentStreak++;
                }
            longestStreak = max(longestStreak,currentStreak);
            }
        }
        return longestStreak;
    }
};