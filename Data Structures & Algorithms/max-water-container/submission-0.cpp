class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0;
        int j = h.size()-1;
        int ans = min(h[i],h[j]) * (j-i);
        while(i< j){
            ans = max(ans, min(h[i],h[j]) * (j-i));
            if(h[i] > h[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
