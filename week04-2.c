int maximumCount(int* nums, int numsSize) {
    int pos = 0, neg = 0;//�j��e���A���O0
    for(int i = 0;i<numsSize;i++)
    {
        if( nums[i]>0)
        {
             pos++;//����
        }
        if( nums[i]<0)
        {
            neg++;//����
        }
        //�j�餤�A���ӥ�
    }
    //�j��᭱�A�⥦���ӥ�
    if (pos>neg)
    {
        return pos;//���Ƹ��h
    }
    else
    {
        return neg;//�_�h�t��
    }
}
