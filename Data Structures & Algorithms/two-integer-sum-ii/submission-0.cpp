class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res(2);
        int start = 0 ; 
        int end = nums.size() -1;
        while(start<end){
            int x = nums[start]+ nums[end] ;
            if(x > target )end -- ; 
            else if ( x < target ) start ++ ;
            else{
                res[0] = start + 1 ; 
                res[1] = end + 1 ;
                return res ; 
            }
        }
    }
};
