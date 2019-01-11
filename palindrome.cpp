class Solution {
public:
    bool isPalindrome(string s) {
    int i = 0, j = 0, sz = s.length();
        j=sz-1;
        if(sz == 1||sz==0)
            return true;
        while(i < j)
        {
            if(!((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123) || ((s[i] > 47 && s[i] < 58))))  
            { 
                i++;
                continue;
            }
            if(!((s[j] > 64 && s[j] < 91) || (s[j] > 96 && s[j] < 123) || (s[j] > 47 && s[j] < 58)))  
            { 
                j--;
                continue;
            }
            if(((s[j] > 47 && s[j] < 58) || (s[i] > 47 && s[i] < 58)))
            { 
                if(s[j] != s[i])
                break;
            }
            else if(s[i] != s[j] && s[i]-s[j] != 32 && s[i]-s[j] != -32)
                break;
            cout << s[i] << " ";
            j--;i++;
        }
        if(j-i <1)
            return true;
        else
            return false;
    }
};
