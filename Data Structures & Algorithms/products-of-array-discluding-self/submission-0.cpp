class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int r = 1 ;
        bool  zero = false ; 
        int index = -1 ;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]==0){
                if(index != -1 )zero = true ;
                index = i ;
                continue ;
            }
            r*=nums[i];
        }

        vector<int> res(nums.size(),0) ;
        if(zero)return res ;
        if(index != -1 ){res[index] = r; return res ;}

for(int i = 0 ; i < nums.size();i++){
            res[i]=(r/nums[i]);
        }
        
        
        return res ;
    }
};
