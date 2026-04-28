class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> mp;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }

        bool flag = false; 

        for(auto itr: mp){
            if (itr.second >=2){
                flag = true;
            }
        }

        return flag;
    }
};