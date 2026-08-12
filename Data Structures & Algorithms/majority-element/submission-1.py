from collections import Counter

class Solution:
    def majorityElement(self, nums):
        freq = Counter(nums)
        n = len(nums)

        for num, count in freq.items():
            if count > n // 2:
                return num

        return -1
