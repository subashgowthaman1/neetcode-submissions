class Solution {
public:
    unordered_map<int, int> indexMap;
    bool hasDuplicate(vector<int>& nums) 
    {
        for(int index =0; index <nums.size(); index++)
        {
            if(indexMap[nums[index]] == 0)
            {
                indexMap[nums[index]]++;
            }
            else
            {
                return true;
            }

        }

        return false;
    }

};