from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        arr = sorted([(num, i) for i, num in enumerate(nums)])
        left, right = 0, len(arr) - 1
        while left < right:
            s = arr[left][0] + arr[right][0]
            if s == target:
                return [arr[left][1], arr[right][1]]
            elif s < target:
                left += 1
            else:
                right -= 1
        return []

if __name__ == "__main__":
    sol = Solution()
    nums = [2, 7, 11, 15]
    target = 9
    print(sol.twoSum(nums, target))