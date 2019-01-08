class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         if(k==0)
            return;
        int s = nums.size(),i=0,j=0,t=0,temp=nums[0];
        if(k > s)
            k = k-s;
            while(j < s)
            {
                t = t+k;
                if(t >= s)
                {
                    t=(t-s);
                    //cout << t << endl;
                }
                temp = temp+nums[t];
                nums[t]=temp-nums[t];
                temp = temp-nums[t];
                //cout << temp << endl;
                j++;
                if((s%k == 0) && t < k)
                {
                    t++;
                    temp = nums[t];  
                    cout << temp << endl;
                }        
            }
            //j++;
            //temp = nums[j];
          //  t = j;
        //}
    }
};
