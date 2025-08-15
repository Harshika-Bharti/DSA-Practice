class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;  
        int count = 0;      
        for (int i = 0; i < nums.size(); i++) 
        {
            if (count == 0) {
                // if our guess has no "support", pick a new candidate
                candidate = nums[i];
                count = 1;
            } else if (nums[i] == candidate) {
                // same as candidate → strengthen support
                count++;
            } else {
                // different from candidate → weaken support
                count--;
            }
        }
        return candidate;
    }
};