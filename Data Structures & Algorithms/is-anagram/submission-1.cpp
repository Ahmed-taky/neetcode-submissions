class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char , int> m ;
        for(int i = 0 ; i < s.length() ; i ++){
            m[s[i]]++;
        }
        for(int i = 0 ; i < t.length() ; i ++){
            --m[t[i]] ; 
        }
        for(auto i = m.begin() ; i!=m.end() ; i++){
            if(!(i->second == 0))return false;
        }
        return true;
    }
};
