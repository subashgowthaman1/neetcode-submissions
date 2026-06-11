class Solution {
public:
    unordered_map<int, int> indexMap;

    

    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            // If the number is already in the set, it's a duplicate
            if (seen.count(num)) {
                return true;
            }
            // Insert the number into the set
            seen.insert(num);
        }

        return false;
    }


};