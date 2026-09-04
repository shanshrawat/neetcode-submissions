class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n=strs.size();
        unordered_map<string,vector<string>> table;
        for(int i=0; i<n; i++) {

            vector<int> count(26,0);
            int len=strs[i].size();
            for(int j=0; j<len; j++) {
                count[strs[i][j]-'a']++;
            }
           string key;
            for (int j = 0; j < 26; j++) {
            key += '#' + to_string(count[j]);
            }
            table[key].push_back(strs[i]);

        }

        vector<vector<string>> ans;
        for (auto& [key, group] : table) {
            ans.push_back(group);
        }

        return ans;

    }
};
