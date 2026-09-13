class Solution {

private:
    void heapify(vector<int>&nums, int i, int n) {

        int largest=i;
        int left=2*i+1;
        int right=2*i+2;

        if(left<n && nums[left]>nums[largest]) largest=left;
        if(right<n && nums[right]>nums[largest]) largest=right;
        if(largest!=i) {

            int temp=nums[i];
            nums[i]=nums[largest];
            nums[largest]=temp;
            heapify(nums,largest,n);
        }

    }

public:
    vector<int> sortArray(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=n/2-1; i>=0; i--){

            heapify(nums,i,n);
        }
        int heapsize=n-1;
            while(heapsize>0) {
            int temp=nums[heapsize];
            nums[heapsize]=nums[0];
            nums[0]=temp;
            heapify(nums,0,heapsize);
            heapsize--;
        }
        return nums;

    }
};