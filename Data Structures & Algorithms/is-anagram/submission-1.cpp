class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size()) return false;
        unordered_map<int, char> firstStringMap;
        unordered_map<int, char> secondStringMap;
        for(int i =0; i< s.size(); i++)
        {
            firstStringMap[s[i]]++;
            secondStringMap[t[i]]++;
        }
        if(firstStringMap == secondStringMap )
        {
            return true;

        }
        else
        {
            return false;
        }

    }
};
