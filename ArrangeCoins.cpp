class Solution {
public:
    int arrangeCoins(int n) {
        unsigned int count = 0,i=1,in=0,j=0;
        while(count < n)
        {
            i++;
            count = count + i;
        }
        return i-1;
    }
};
