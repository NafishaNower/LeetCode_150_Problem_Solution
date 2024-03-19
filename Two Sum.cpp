class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> numbers_indices;

      for(int i=0;i<nums.size();i++){
        int compliment = target-nums[i];
        if(numbers_indices.find(compliment) != numbers_indices.end()){
            return {numbers_indices[compliment],i};
        }
        numbers_indices[nums[i]]=i;
      }
       return {};
    }
};
