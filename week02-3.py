#week02-3.py �gLeetCode
#Leetcode 1. Two Sun
#���@��Ʀr nums �̭�����Ӭۥ[,�Otarget
#nums[i] + nums[j] == target ���i �M j �ϱo�[�_�ӬO target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} #���@�ӽc�l, �̭���X�{�L���Ʀr
        #�ڭ̷Q�n��X Target �o�ӥ[�`
        for i, num in enumerate(nums):
            other = target - num#�t�~�@�ӻݭn���� �i�H��X target��(target-num)
            if other in box: #�b�c�l�̦��t�@�ӻݭn����
                return [box[other], i]#��쵪��
            else:#�p�G�S���A�X���Ʀr���
                box[num] = i #�N��{�b���Ʀrnum, ���box �̭�
