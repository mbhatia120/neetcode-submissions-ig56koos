class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char, int> mp;
        for(int i = 0 ; i<s1.size() ; i++){
            mp[s1[i]]++;
        }
        int count = 0;
        int i = 0;
        int j = 0;
        while (i<s2.size()){
            if(mp[s2[i]] > 0){
                count++;
            }
            mp[s2[i]]--;
            while(count == s1.size()){
                if(i-j+1 == count){
                    return true;
                }
                mp[s2[j]]++;
                if(mp[s2[j]] > 0){
                    count--;
                }
                j++;
            }
            i++;
        }
        return false;
    }
};
