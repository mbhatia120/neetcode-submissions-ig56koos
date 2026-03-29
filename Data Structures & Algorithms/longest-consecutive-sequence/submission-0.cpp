class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        map<int,int> mp;
        for(int i: nums){
            mp[i] = 1;
        }
        int ans = 1;
        for(int i : nums){
            if(mp.find(i-1)==mp.end()){
                int x = i;
                while(mp.find(x+1)!= mp.end()){
                    x++;
                }
                ans = max(ans, x-i+1);
            }
        }
        return ans;
    }
};
