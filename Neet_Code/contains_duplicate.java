class Solution {
    public boolean containsDuplicate(int[] nums) {
        
        Set<Integer> entry  = new HashSet<>();
        
        for(int i = 0; i<nums.length ; i++){
            
            if(entry.contains(nums[i])){
                return true;
            }
            entry.add(nums[i]);
        }
        return false;
    }
}
