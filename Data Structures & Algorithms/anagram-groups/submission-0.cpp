class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> group;

        for(auto &s: strs) {
// sorting doesnt return anything that u can assign so u have to first get string into key then sort it
            string key=s;
            sort(key.begin(),key.end());
            group[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto [key,grop] : group) {
            ans.push_back(grop);
        }

        return ans;

    }

    
};
