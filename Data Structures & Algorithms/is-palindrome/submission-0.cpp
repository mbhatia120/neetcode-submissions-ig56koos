class Solution {
public:
    bool isvalid(char c){
        if((c>='0' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z') ){
            return true;
        }
        return false;
    }
    string preprocess(string s){
        string ans = "";
        for(char c: s){
            if(isvalid(c)){
                ans += c;
            }
        }
        return ans;

    }
    bool isPalindrome(string s) {
        string processed = preprocess(s);
        int i =0;
        int j= processed.size()-1;
        while(i<j){
            if(tolower(processed[i])!=tolower(processed[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
