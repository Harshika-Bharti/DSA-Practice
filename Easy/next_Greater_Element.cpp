class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) { // BRUTE FORCE
        vector<int> op;
        int j, c, k;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(j = 0; j < nums2.size(); j++)
            { 
                if(nums1[i] == nums2[j])
                {
                    c = j;
                }
            }
            for(k = c+1; k < nums2.size(); k++)
            {
                if(nums2[k] > nums1[i])
                {
                    op.push_back(nums2[k]);
                    break;
                }
            }
            if (k == nums2.size())
                op.push_back(-1);
        }
        return op;
    }
};

// class Solution { //OPTIMAL
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int, int> nextGreater;
//         stack<int> st;

//         // Build mapping of next greater for nums2
//         for (int num : nums2) {
//             while (!st.empty() && st.top() < num) {
//                 nextGreater[st.top()] = num;
//                 st.pop();
//             }
//             st.push(num);
//         }

//         // Any remaining in stack have no next greater
//         while (!st.empty()) {
//             nextGreater[st.top()] = -1;
//             st.pop();
//         }

//         // Build answer for nums1
//         vector<int> result;
//         for (int num : nums1) {
//             result.push_back(nextGreater[num]);
//         }
//         return result;
//     }
// };