class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = nums.size();
        for(int i = 0; i<k;i++){
            for(int f= i+1;f<k;f++){

            if(nums[i]==nums[f]){
            for(int j = i+1;j<k-1;j++){
                nums[j]=nums[j+1];
            }

            k--;
            f--;
            }
        }
        }
        return k;

    }
};