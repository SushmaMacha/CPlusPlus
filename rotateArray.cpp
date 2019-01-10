class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp,i=0,j=0,s = nums.size(),count=0;
        k = k%s;
        if(k == 0 || s == 1)
            return;
        while(count < s)
        {
            temp = nums[j];
            i=j;
            do{ 
                i = (i+k)%s;
                temp = temp + nums[i];
                nums[i] = temp-nums[i];
                temp = temp - nums[i];
                count++;
            }
            while(i != j);
            j++;
        }
    }
};
