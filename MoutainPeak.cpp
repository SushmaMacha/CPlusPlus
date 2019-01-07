#Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int j = A.size(),s = 0,e = j-1,mid = j/2,i=0;
        if(j < 3)
            return -1;
        while(1)
        {
            mid = (s+e)/2;
            if(A[mid] < A[mid+1])
                s = mid;
            else
                e = mid;
            if(e-s <= 1)
                return e;
        }
        return e;
        
        // if(j < 3)
        //     return false;
        // while(A[i] < A[i+1] && i+1 < j) i++;
        // r=i;
        // while(A[i] > A[i+1] && i+1 < j) i++;
        // if(i == j-1)
        //     return r;
        //return -1;
    }
};
