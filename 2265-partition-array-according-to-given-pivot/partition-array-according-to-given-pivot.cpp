class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size());
        int countLess = 0;
        int equal = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]<pivot){
                countLess++;
            }
            else if(nums[i]==pivot){
                equal++;
            }
        }
        int j=countLess;
        int k=countLess+equal;
        int index = 0;

        for(int i =0;i<nums.size();i++){
            if(nums[i]<pivot){
                result[index++] = nums[i];
            }
            else if(nums[i]==pivot){
                result[j] = nums[i];
                j++;
            }
            else{
                result[k] = nums[i];
                k++;
            }
        }

        return result;

            
        
    }
};