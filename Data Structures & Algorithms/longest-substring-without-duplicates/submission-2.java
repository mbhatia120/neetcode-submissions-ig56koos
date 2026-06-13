class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> mp = new HashMap<>();
        int l = 0, r =0;
        int ans = 0;
        while(r<s.length()){
            if(!mp.containsKey(s.charAt(r))){
                mp.put(s.charAt(r), 1);
                r++;
            }
            else{
                while(l<r && s.charAt(l) != s.charAt(r)){
                    mp.remove(s.charAt(l));
                    l++;
                }
                mp.remove(s.charAt(l)); // duplicate character remove karo
                l++;
            }

            ans = Math.max(ans, r-l);
        }

        return ans;
        
    }
}
