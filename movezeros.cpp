void moveZeroes(int* nums, int numsSize) {
    //integers - sort
    //zeros - move to the end - decrease numsize
    int i = 0, j = 0,pos=0;
    printf("%d",numsSize);
    for(i = 0; i < numsSize-1; i++)
    {
        //exchange a non zero number with zero
        if(*(nums+pos) == 0 && *(nums + i + 1) != 0)
        {
            //exchange
            *(nums+pos) = *(nums+i+1);
            *(nums+i+1) = 0;
            pos++;
            //pos - the first zero 
        }
        else if(!(*(nums+pos) == 0 && *(nums + i + 1) == 0))
            pos++;
        
    }
}
