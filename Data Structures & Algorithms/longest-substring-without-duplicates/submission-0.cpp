class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0;
        int ans = 0;
        map<char,int> mp;
        while(r<s.size()){
            mp[s[r]]++;
            if(mp[s[r]] == 1){
                ans = max(ans, r-l+1);
            }
            else{
                while(mp[s[r]] != 1){
                    mp[s[l]]--;
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};
