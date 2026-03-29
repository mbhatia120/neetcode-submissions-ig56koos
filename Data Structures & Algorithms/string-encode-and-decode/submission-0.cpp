class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string s : strs){
            ans = ans + to_string(s.size()) + "#" + s; 
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i =0;
        vector<string> ans;
        while(i< s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            cout<<len;
            j++;
            ans.push_back(s.substr(j,len));
            i = j+len;

        }

        return ans;

    }
};
