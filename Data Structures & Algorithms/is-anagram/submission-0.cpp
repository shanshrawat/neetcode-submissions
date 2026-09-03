class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> sc(26,0);
        vector<int> tc(26,0);

        for(int i=0; i<s.size(); i++) sc[(int)s[i]-97]++;
        for(int i=0; i<t.size(); i++) tc[(int)t[i]-97]++;

        for(int i=0; i<26; i++) if(sc[i]!=tc[i]) return false;
        return true;
    }
};
