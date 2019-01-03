class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l = s2.length(),s = 0,l1 = s1.length();
        char c[l1+1];
        char *c1;
        s1.copy(c,l1);
        c[l1] = '\0';
        string str(c);
       if(l == 0 || l1 > l)
           return false;
       for(int i = 0;i < l;i++)
       {
           //check for continuity
           //c1 = strchr(c,s2[i]);
           std::size_t f = str.find(s2[i]);
           if(f != std::string::npos)
           {
               s++;
               str.erase(f,1);
               //cout << str << endl;
               if(str.length() == 0)
                   return true;
               continue;
           }
           else if(s > 0)
           {
               s1.copy(c,l1);
               str = c;
               i = i-s;
               //cout << "copy " << i << endl;
               s = 0;
           }
       }
        return false;
    }
};
