class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans;
        set<vector<int>>a1;

        for(int i =0; i<nums.size()-2 ; i++){
            int l = i+1;
            int r = nums.size()-1;

            int target = -1 * nums[i];
            while(l < r) {
            int sum = nums[l] + nums[r];
            if(sum < target){
                l++;
            }
            else if ( sum > target){
                r--;
            }
            else{
                a1.insert({nums[i], nums[l], nums[r]});
                l++;
                r--;
            }
            }
        }
        for(auto it = a1.begin() ; it!=a1.end() ; it++){
            ans.push_back(*it);
        }
        return ans;
    }
};
