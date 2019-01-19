/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char* S, int* returnSize) {
    int i = 0, min = 0, max = 0,j = 0,last = 0;
    for(i = 0; S[i] != '\0';i++);
    *returnSize = i+1;max = i;
    int *p  = malloc(sizeof(int)*(i+1));
    for(j = 0; j < i;j++)
    {
        if(S[j] != S[j+1] && S[j] == 'I')
        {
            if(j == 0)
            {
                p[0] = 0; p[1] = max;
                min = 1;
            }
            else
                p[j+1] = max;
            max--;
        }
        else if(S[j] != S[j+1] && S[j] == 'D')
        {
            if(j == 0)
            {
                p[0] = max; p[1] = 0;
                min = 1; max = max-1;
            }
            else
                p[j+1] = min;
            min++;
        }
        else if(S[j] == S[j+1] && S[j] == 'I')
        {
            if(j == 0)
            {
                p[0] = 0; p[1] = 1;
                min = 2;
            }
            p[j+1] = min+1;
            min++;
        }
        else
        {
            if(j == 0)
            {
                p[0] = max; p[1] = max-1;
                max = max-2;
            }
            else
                p[j+1] = max-1;
            max--;
            
        }
    }
    // if(min == 0)
    //     last = min;
    // else if(max == i)
    //     last = max;
    // p[j] = last;
    return p;
}
