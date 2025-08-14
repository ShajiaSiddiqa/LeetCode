from typing import List

# =============== 1. Binary Search Problem no. 704 ===============
# https://leetcode.com/problems/binary-search/?difficulty=EASY&page=1

class BinarySearch:
    def search(self, nums: List[int] , target: int) -> int:
        start = 0
        end = len(nums) - 1

        while start <= end:
            mid  = start + (end - start) / 2

            if target == nums[mid]:
                return mid
            elif nums[mid] < target:
                start = mid +1
            else :
                end = mid -1

        return -1
    
def inputArray() -> List[int]:
    nums = []
    print("Enter an array of integers in ascending order ending with -1!")
    while True:
        n = int(input())
        if n == -1:
            break

        nums.append(n)

    return nums

def main():
    nums = inputArray()
    target = int(input("Enter Target: "))
    Bs = BinarySearch(nums, target)
    if index != -1:
        print(f"Target found at index {index}")
    else:
        print("Target not found")

if __name__ == "__main__":
    main()

# =============== 2 Divide Array Into Equal Pairs (Problem # 2206.)  =============== 
# https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=daily-question&envId=2025-08-12

from collections import Counter

class DIVIDEARRAY:
    def divideArray(self, nums):
        # 1) Optional sanity check: length must be even (2 * n)
        if len(nums) % 2 != 0:
            return False

        # 2) Count how many times each number appears
        freq = Counter(nums)

        # 3) For pairing, every count must be even
        for times in freq.values():
            if times % 2 != 0:
                return False

        return True
    

class Divide_Array:
    def divideArray(self, nums: List[int]) -> bool:
        if len(nums) % 2 != 0:
            return False
        nums.sort()

        for i in range(0, len(nums), 2):
            if nums[i] != nums[i+1]:
                return False

        return True
    

if __name__ == "__main__":
    nums = []
    print("Enter integers (end with -1):")
    while True:
        n = int(input())
        if n == -1:
            break
        nums.append(n)

    sol = Divide_Array()
    result = sol.divideArray(nums)

    if result:
        print("True — The array can be divided into equal pairs.")
    else:
        print("False — Cannot be divided into equal pairs.")
