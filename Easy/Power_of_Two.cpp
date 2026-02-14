class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1)
        return true;
        else if (n <= 0)
        return false;
        long power = 1;
        while(power <= n)
        {
            power = power * 2 ;
            if(power == n)
            return true;
        }
        return false;
    }
};