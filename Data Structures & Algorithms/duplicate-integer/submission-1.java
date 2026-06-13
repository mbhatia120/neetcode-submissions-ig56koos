class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> ele = new HashSet<>();
        for(int n : nums){
            if(ele.contains(n)){
                return true;
            }
            else{
                ele.add(n);
            }
        }
        return false;
    }
}