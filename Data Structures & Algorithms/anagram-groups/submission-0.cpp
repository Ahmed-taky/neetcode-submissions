class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    unordered_map<string, vector<string>> res;
        for(auto &x : strs){
            string v = x;
            sort(v.begin(), v.end());
            res[v].push_back(x);
        }
        vector<vector<string>> result;
         for(auto &x : res){
            result.push_back(x.second);
         }
         return result ;
    }
};
