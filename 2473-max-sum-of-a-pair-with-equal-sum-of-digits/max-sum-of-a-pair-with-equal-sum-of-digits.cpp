class Solution {
public:
    int digitsum(int n){
        int sum =0;

        while(n!=0){
            int temp = n%10;

            sum+=temp;;

            n/=10;
        }

        return sum;
    }
    int maximumSum(vector<int>& nums) {
        //can be optimized using array.
        int n = nums.size();
        int result = -1;
        vector<int> sum(86,-1);
        for(int i =0;i<n;i++){
            int temp = digitsum(nums[i]); 

            if(sum[temp]!=-1){
                result = max(result,nums[i]+ sum[temp]);
            }

            sum[temp] = max(nums[i],sum[temp]);
        }

        return result;
    }
};