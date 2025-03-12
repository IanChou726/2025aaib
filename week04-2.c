int maximumCount(int* nums, int numsSize) {
    int pos = 0, neg = 0;//癹伴玡常琌0
    for(int i = 0;i<numsSize;i++)
    {
        if( nums[i]>0)
        {
             pos++;//タ计
        }
        if( nums[i]<0)
        {
            neg++;//タ计
        }
        //癹伴いㄓノ
    }
    //癹伴рウㄓノ
    if (pos>neg)
    {
        return pos;//タ计耕
    }
    else
    {
        return neg;//玥璽计
    }
}
