class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>> s;
        if(t.empty())
            return {};
        vector<int> ans (t.size(), 0);
        for(int i =0; i<t.size() ; i++){
            while(!s.empty() && t[i]>s.top().first){
                ans[s.top().second]= i-s.top().second;
                s.pop();
            }
            s.push({t[i],i});
        }
        while(!s.empty()){
            ans[s.top().second] = 0;
            s.pop();
        }

        return ans;
    }
};
