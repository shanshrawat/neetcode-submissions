class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        int t=0;
        for(int i=0; i<n; i++) {

            if(nums[i-t]==val) {
                nums.erase(nums.begin()+i-t);
                t++;
            }
        }
        return nums.size();

    }
};