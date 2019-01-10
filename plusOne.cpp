class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size()-1,x = sz;
        if(digits[sz] != 9)
        {
            digits[sz] = digits[sz]+1; 
            return digits;
        }
        while(digits[sz] == 9)
        {
            digits[sz--] =  0;
        }
         if(sz < 0)
            {
                digits.insert(digits.begin(),1);
            }
            else
            {
                digits[sz]++;
            }
        return digits;
    }
};
