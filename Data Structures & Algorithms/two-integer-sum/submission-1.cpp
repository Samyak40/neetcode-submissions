class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;

        for(int i = 0;i<nums.size();i++){
            int y = target - nums[i];
            if(m.contains(y)){
                return {m[y],i};
            }
            m[nums[i]] = i;
        }

    }
};
