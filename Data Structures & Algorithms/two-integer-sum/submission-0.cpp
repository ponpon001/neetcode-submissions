class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> list;

        for(int i=0; i<nums.size(); i++){
            list[nums[i]] = i;
        }

        for(int i=0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(list.find(diff) != list.end() && list[diff] != i){
                return {i, list[diff]};
            }

        }
        return {};
    }
};
