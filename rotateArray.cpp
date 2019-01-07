class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0)
            return;
        int s = nums.size();
        if(k > s)
            k = k-s;
         int temp = 0,i=0,a=s/k,t=k,m=2,j=m*k;
        while(a > 0)
        {
            t = k;
            if(s > j)
            {
                while(t > 0)
                {
                    temp = nums[s-j];
                    nums[s-j] = nums[s-j+k];
                    nums[s-j+k] = temp;
                    t--;j--;
                }
                a--;m++;
            }
            if(m*k >= s)
            {
                t = (s-((m-1)*k))-1;i=0;
                while(t>=0)
                {
                    i = t;
                    while(k>0)
                    {
                        temp = nums[i];
                        nums[i] = nums[i+1];
                        nums[i+1] = temp;
                        k--;i++;
                    }
                    t--;
                }
                break;
            }
        }
    }
};
