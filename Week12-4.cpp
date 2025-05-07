///week12-5.cpp
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();
        vector<int> ans(N);//c++°}¦C
        for(int i=0; i<N; i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};
