class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_set<int> seen;
        for(int index =0; index<nums.size(); index++)
        {
            if(seen.count(nums[index])) return true;
            else seen.insert(nums[index]);
        }   
        return false; 
    }
};