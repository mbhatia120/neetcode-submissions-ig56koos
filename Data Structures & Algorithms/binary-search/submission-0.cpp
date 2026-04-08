class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l =0, h=nums.size() -1;

        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid] == t){
                return mid;
            }
            else if(nums[mid] > t){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
};
