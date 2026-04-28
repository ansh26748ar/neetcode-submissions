class Solution {
public:
    bool isAnagram(string s, string t) {
        int sizeS = s.length();
        int sizeT = t.length();

        if(sizeS != sizeT){
            return false;
        }

        unordered_map <char,int> mp;
        for(int i = 0;i < sizeS; i++){
            mp[s[i]]++;
        }

        for(int i = 0;i < sizeT; i++){
            mp[t[i]]--;
        }

        for(auto itr : mp){
            if(itr.second != 0){
                return false;
            }
        }

        return true;
    }
};
