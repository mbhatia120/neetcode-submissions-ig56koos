class Solution {
public:
    struct comp{
        bool operator()(pair<int,int> a, pair<int,int>b){
            if(a.second < b.second){
                return 0;
            }
            return 1;
        }
    };

    vector<int> topKFrequent(vector<int>& n, int k) {
        map<int,int> mp;
        for(int i : n){
            mp[i]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>,comp> pq;

        for (auto it : mp){
            if(pq.size() < k){
                cout<<it.first<<" "; 
                pq.push({it.first, it.second});
            }
            else if(pq.top().second < it.second){
                pq.pop();
                pq.push({it.first, it.second});
            }
        }

        vector<int> ans;
        while(pq.size()){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;

    }
};
