class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> mp = new HashMap<>();
        int l = 0, r =0;
        int ans = 0;
        while(r<s.length()){
            mp.put(s.charAt(r) , 1+mp.getOrDefault(s.charAt(r) , 0));
            if(mp.get(s.charAt(r)) == 1){
                ans = Math.max(r-l+1, ans);
            }
            else{
                while(mp.get(s.charAt(r)) != 1){
                    mp.put(s.charAt(l) , mp.get(s.charAt(l)) -1);
                    l++;
                }
            }
            r++;
        }

        return ans;
        
    }
}
