#week02-3.py 寫LeetCode
#Leetcode 1. Two Sun
#有一堆數字 nums 裡面哪兩個相加,是target
#nums[i] + nums[j] == target 找到i 和 j 使得加起來是 target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} #有一個箱子, 裡面放出現過的數字
        #我們想要湊出 Target 這個加總
        for i, num in enumerate(nums):
            other = target - num#另外一個需要的數 可以湊出 target的(target-num)
            if other in box: #在箱子裡有另一個需要的數
                return [box[other], i]#找到答案
            else:#如果沒有適合的數字能湊
                box[num] = i #就把現在的數字num, 放到box 裡面
