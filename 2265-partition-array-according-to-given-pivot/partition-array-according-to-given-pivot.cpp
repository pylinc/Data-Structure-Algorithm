class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>  lessThan;
        vector<int> equal;
        vector<int> greaterThan;

        vector<int> result;

        for(int i =0;i<nums.size();i++){
            if(nums[i]<pivot){
                lessThan.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                greaterThan.push_back(nums[i]);
            }
            else{
                equal.push_back(nums[i]);
            }
        }
        for(int i =0;i<lessThan.size();i++){
            result.push_back(lessThan[i]);
        }
        for(int i =0;i<equal.size();i++){
            result.push_back(equal[i]);
        }
        for(int i =0;i<greaterThan.size();i++){
            result.push_back(greaterThan[i]);
        }

        return result;
    }
};