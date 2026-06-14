class Solution {
    public int characterReplacement(String s, int k) {
        int r = 0, l = 0;
        int ans = 0;
        int freq= 0;
        HashMap<Character, Integer> map = new HashMap<>();
        while(r<s.length()){
            map.put(s.charAt(r) , 1+ map.getOrDefault(s.charAt(r) , 0));
            freq = Math.max(freq, map.get(s.charAt(r)));
            if(r-l + 1 - freq > k){
                map.put(s.charAt(l), map.get(s.charAt(l)) - 1);
                l++;
            }

            ans = Math.max(ans, r-l+1);
            r++;
        }
        return ans;
    }
}
