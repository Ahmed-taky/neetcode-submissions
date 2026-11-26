class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=nums[0] , s=0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            s = max(0,s);
            s+= nums[i];
            m = max(s,m);
        }
        return m ;
    }
};
