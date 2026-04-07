class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq = 0;
        map<char,int> mp;
        int r = 0; 
        int l = 0; 
        int ans = -1;;
        while(r<s.size()){
            mp[s[r]]++;
            freq = max(freq, mp[s[r]]);
            if(r-l+1 - freq > k ){
                mp[s[l]]--;
                l++;
            }
            if(r-l+1 - freq <= k){
                ans = max(ans, r-l+1);
            }
            r++;
        }
        return ans;
    }
};
