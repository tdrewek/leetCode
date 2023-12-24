class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for (int i = 0; i < nums.size(); ++i){
            int remainder;
            remainder = target - nums[i];
            for (int j = i + 1; j < nums.size(); ++j){
                if (nums[j] == remainder){
                    output.push_back(i);
                    output.push_back(j);
                }
            }
        }
        return output;
    }
};
