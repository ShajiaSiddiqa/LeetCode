#include<iostream>
#include<vector>

using namespace std;

// =============== 1. Binary Search Problem no. 704 ===============
class BinarySearch 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(target == nums[mid])
                return mid;

            else if(nums[mid] < target)
                start = mid + 1;
            
                else
                end = mid - 1;
        }
        return -1;
    }
};

void inputarray(vector<int>& nums)
{
    cout << "Enter an array of integers in ascending order ending with -1 !\n";
    int n;
    while (true)
    {
        cin >> n;
        if (n == -1) 
            break; 
        nums.push_back(n);
    }
}

int main()
{
    vector<int> nums;
    int target;
    inputarray(nums);
    cout << "Enter Target : ";

    BinarySearch Bs;
    int index = Bs.search(nums, target);

    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found\n";

    return 0;
}