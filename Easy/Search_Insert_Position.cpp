//35. Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int loc;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                loc = i;
                break;
            }
            else if (nums[i] > target)
            {
                loc = i;
                break;
            }
        }
        return loc;
    }
};