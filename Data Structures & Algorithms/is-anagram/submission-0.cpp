class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s1(26,0);
        vector<int> t1(26,0);

        for(char i : s){

            s1[i-'a']++;
        }
        for(char i : t){

            t1[i-'a']++;
        }
        for(int i=0; i<26 ; i++){

            if(s1[i]!=t1[i]){
                return false;
            }
        }
        return true;
    }
};
