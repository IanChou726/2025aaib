#week04-2.py �O���Ѫ� LeetCode �D���D Easy �D(�G�X�@)
#LeetCode 2529. Maximum Count of Positive Integer and Negative Integer
#��X ���X�ӥ��� ���X�ӭt�� �j�����Ӧ^��
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0#�j��e�ǳƦn����0
        for i in range(len(nums)):#�j����A��s
            if nums[i]>0:
                pos+=1
            if nums[i]<0:
                neg+=1
        #�j��ᵪ�׮��ӥ�
        return max(pos,neg)
