class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>sum;
        int rsum=0;
        int count=0;
        sum[0]=1;

        for(int num:nums) {

            rsum+=num;
            if(sum.find(rsum-k)!=sum.end()) {
                count+=sum[rsum-k];
            }
            sum[rsum]++;
        }
        return count;
    
    }
};