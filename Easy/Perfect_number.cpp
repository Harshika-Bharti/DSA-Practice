class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i = 1, n = num, fact = 0, rem;
        while(i <= num/2)
        {
            rem = num % i ; 
            if(rem == 0)
            {
                fact = fact + i;
            }
            i++;
        }
        if(fact == n)
        return true;
        else return false;
        
    }
};