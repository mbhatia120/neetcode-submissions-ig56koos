class Solution {
    public int longestConsecutive(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<> ();
        for(int num : nums){
            mp.put(num, 1);
        }
        int ans = 0;
        for(int num : nums){
            if(!mp.containsKey(num-1)){
                int x = 0;
                while(mp.containsKey(num+x)){
                    x++;
                }
                ans = Math.max(ans, x);
            }
        }
        return ans;
    }
}
