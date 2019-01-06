#Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int j = A.size(),i=0,r=0;
        if(j < 3)
            return false;
        while(A[i] < A[i+1] && i+1 < j) i++;
        r=i;
        while(A[i] > A[i+1] && i+1 < j) i++;
        if(i == j-1)
            return r;
        return -1;
    }
};
