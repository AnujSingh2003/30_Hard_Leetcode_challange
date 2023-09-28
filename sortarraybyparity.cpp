class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int n=nums.size();
      
       for(int i=0;i<n-1;i++){
           for(int j=n-1;j>i;j--){
               if(nums[i]%2!=0 && nums[j]%2==0){
                   swap(nums[i],nums[j]);
               }
            
         }
       }
       return nums;
    }
};