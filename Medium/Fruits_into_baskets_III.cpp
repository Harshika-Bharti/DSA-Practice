class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0, j;
        unordered_map<int,int> store;
        for (int i = 0; i < fruits.size(); i++)
        {
            for (j = 0; j < baskets.size(); j++)
            {
                if(store.find(j) != store.end())
                    continue;
                if((baskets[j] > fruits[i]) || (baskets[j] == fruits[i]))
                {
                    store[j] = j;
                    break;//continue;
                }
            }
            if(j == baskets.size())
                count++;
        }
        if( count > 0)
            return count;
        else
            return 0;
    }
};