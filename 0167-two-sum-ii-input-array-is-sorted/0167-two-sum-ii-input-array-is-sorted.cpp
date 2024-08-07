class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int left = 0 , right = numbers.size()-1;
        for(int i = 0 ; i < numbers.size()-1 ; i++){
                if(numbers[left] + numbers[right] == target){
                    ans.push_back(left+1);
                    ans.push_back(right+1);
                    break;
                }
            else if(numbers[left] + numbers[right] > target) right--;
            else left++;
        }
        return ans;
    }
};