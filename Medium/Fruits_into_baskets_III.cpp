// THIS SOLUTION IS NOT OPTIMAL
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0, j;
        unordered_map<int,int> store; 
        for (int i = 0; i < fruits.size(); i++)
        {
            for (j = 0; j < baskets.size(); j++)
            {
                if(store.find(j) != store.end()) //if already used basket if found, then skip it & look for another
                    continue;
                if((baskets[j] > fruits[i]) || (baskets[j] == fruits[i])) //if basket has capacity to accomodate the fruits
                {
                    store[j] = j; //add the basket in the hashmap so that no other fruit will be placed in same basket
                    break;        // if fruit is placed in a basket then loo for another fruit if it has also a basket 
                }
            }
            if(j == baskets.size()) // fruit doesn't find basket for itself
                count++; //count the no. of fruits which don't get a basket
        }
        return count;
    }
};