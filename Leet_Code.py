from typing import List

# =============== 1. Binary Search Problem no. 704 ===============

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


