class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         if(k==0)
            return;
        int s = nums.size(),i=0,j=0,t=0,temp=nums[0];
        if(k > s)
            k = k-s;
        //cout << k << s << endl;
        //temp = nums[k-1];
        //temp = temp+nums[((i+1)*k)-1]; 
        //while(j<k)
        //{
            while(1)
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
                //cout << temp;
                if(t==j)
                    break;
            }
            //j++;
            //temp = nums[j];
          //  t = j;
        //}
    }
};
