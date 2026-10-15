class Solution {
public:
    int findNumbers(vector<int>& nums) {
    int count = 0;
        for(int j = 0; j<nums.size(); j++){
            int digits=1;
            while(nums[j]/10 != 0){
                nums[j]=nums[j]/10;
                digits = digits + 1;
            }
            if(digits%2==0){
                count+=1;
            }
        }
    return count;
    }
};