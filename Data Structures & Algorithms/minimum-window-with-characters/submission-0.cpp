class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> freq;
        for(int i=0; i< t.size() ; i++){
            freq[t[i]]++;
        }
        int r = 0;
        int l=0;
        int ind = -1;
        int ans = INT_MAX;
        int count = 0;
        while(r<s.size()){
            if(freq[s[r]] > 0){
                count++;
            }
            freq[s[r]]--;
            while(count == t.size()){
                if(ans > r-l+1){
                    ans = r-l+1;
                    ind = l;
                }
                freq[s[l]]++;
                if(freq[s[l]] > 0){
                    count--;
                }
                l++;
            }
            r++;
        }

        if(ind == -1){
            return "";
        }
        return s.substr(ind, ans);
    }
};
