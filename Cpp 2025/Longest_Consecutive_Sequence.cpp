class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // insertion in set O(1);  nums have n numbers so O(n);
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