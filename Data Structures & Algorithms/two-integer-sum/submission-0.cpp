class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> seen;
        int n=nums.size();  

        for(int i=0; i<n; i++) {

            int complement=target-nums[i];
            if(seen.count(complement)) {

                vector<int> ans(2);
                ans[0]=seen[complement];
                ans[1]=i;
                return ans;
            }
            seen[nums[i]]=i;

        }

    }
};
