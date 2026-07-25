class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int ,int > value;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(value.find(target - nums[i]) !=  value.end()) return {value[target - nums[i]] , i};
            value[nums[i]] = i;
        }
        return {-1 , -1};
    }
};