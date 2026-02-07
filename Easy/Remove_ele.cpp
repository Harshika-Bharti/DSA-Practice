// remove element 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int r =0, w = 0;
        for(r  = 0; r< nums.size(); r++)
        {
            if (nums[r] != val)
            {
                nums[w] = nums[r];
                w++;
            }
        }
        return w;
    }
};






