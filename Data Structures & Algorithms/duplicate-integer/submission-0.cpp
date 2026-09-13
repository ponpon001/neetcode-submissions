class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> a;
        for(int num : nums){
            if(a.contains(num)){
                return true;
            }
            a.insert(num);
        }
        return false;
    }
};