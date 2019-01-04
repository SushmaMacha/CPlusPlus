class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     int count[256] = {0},l1,l2;
        l1 = s1.length(); l2 = s2.length();
        for(char c : s1)
            count[c]++;
        for(int i = 0,j=0; i < l2; i++)
        {
            if(count[s2[i]] > 0){
                l1--;
            }
            count[s2[i]]--;
            while(l1 == 0)
            {
                if((i+1)-j == s1.length())
                    return true;
                if(++count[s2[j++]] > 0)
                    l1++;
            }
        }
        
        return false;
    }
};
