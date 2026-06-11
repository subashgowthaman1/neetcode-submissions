class Solution {
public:
    unordered_map<int, int> indexMap;

    

    bool hasDuplicate(vector<int>& nums) 
    {
       // if(nums.size() == 0) return false;


        {
            for(int index =0; index <nums.size(); index++)
            {
                if(indexMap[nums[index]] > 0)
                {
                   return true;
                }
                else
                {
                   indexMap[nums[index]]++;
                }

            }
        }

        return false;
    }

};