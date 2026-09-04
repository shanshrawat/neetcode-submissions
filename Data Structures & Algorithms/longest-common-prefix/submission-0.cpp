class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        int min=201;
        for(int i=0; i<n; i++) {
            int x=strs[i].length();
            if(x<min) min=x;

        }

        string ans="";
        for(int i=0; i<min; i++) {
            char validcheck=strs[0][i];
            for(int j=0; j<n; j++) {

                if(strs[j][i]!=validcheck) {
                    return ans; 
                }
                
            }
            ans.push_back(validcheck);
        }
        return ans;
    }
};