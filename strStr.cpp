class Solution {
public:
    int strStr(string haystack, string needle) {
     int ret = -1,l = haystack.length(),i=0,j=0,s=needle.length();
        if(s > l)
            return ret;
        if(s == 0)
            return 0;
     for(int k = 0; k < l;k++)
     {
         i=k;j=0;
         while((haystack[i] == needle[j]) && haystack[i] != '\0')
         {
             i++;j++;
             //cout << i << endl;
         }
         if(i == k+s)
             return k;
     }
        return ret;
    }
};
