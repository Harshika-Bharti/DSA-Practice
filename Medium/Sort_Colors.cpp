class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        //loop to count the frequency of 0, 1 and 2 in the given array
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
                count0++;
            else if(nums[i] == 1)
                count1++;
            else if(nums[i] == 2)
                count2++;
        }
        int i, j ,k;
        //these loops will modify the array with according to the counted values 
        for(i = 0; i < count0; i++)
        {
            nums[i] = 0;
        }
        for(j = i; j < i+count1; j++)
        {
            nums[j] = 1;
        }
        for(k = j; k < j+count2; k++)
        {
            nums[k] = 2;
        }
    }
};