#include <unordered_map>
#include<iostream>
#include <string>
#include<vector>

using namespace std;

// =============== 1. Binary Search Problem no. 704 ===============
// https://leetcode.com/problems/binary-search/?difficulty=EASY&page=1

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

int main01()
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

// =============== 2 Divide Array Into Equal Pairs (Problem # 2206.)  =============== 
// https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=daily-question&envId=2025-08-12


class DivideArray 
{
public:
    bool divideArray(vector<int>& nums) 
    {
        if(nums.size() % 2 != 0)
            return false;

         unordered_map<int, int> freq;

        for(auto num : nums)
            freq[num]++;
        
        for(auto &pair : freq)
            if(pair.second % 2 != 0)
                return false;

        return true;
        
    }
};

int main() 
{
    DivideArray DA;

    vector<int> nums1 = {3, 2, 3, 2, 2, 2};
    vector<int> nums2 = {1, 2, 3, 4};

    cout << boolalpha;
    cout << DA.divideArray(nums1) << endl;  // true
    cout << DA.divideArray(nums2) << endl;  // false

    return 0;
}


// ===============  Valid Anagram (Problem # 242) =============== 
// https://leetcode.com/problems/valid-anagram/description/?difficulty=EASY&page=1

class ValidAnagram 
{
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size())
            return false;

        unordered_map<char,int> word_s;
        unordered_map<char,int> word_t;

        for(char w: s)
            word_s[w]++;   

        for(char w: t)
            word_t[w]++;   

        return word_s == word_t;
    }
};

int main() 
{
    ValidAnagram sol;

    // Test case 1
    string s1 = "anagram";
    string t1 = "nagaram";
    cout << (sol.isAnagram(s1, t1) ? "true" : "false") << endl;

    // Test case 2
    string s2 = "rat";
    string t2 = "car";
    cout << (sol.isAnagram(s2, t2) ? "true" : "false") << endl;

    // Test case 3
    string s3(200, 'a');
    s3.back() = 'b'; // last char 'b'
    string t3(200, 'b');
    t3.back() = 'a'; // last char 'a'
    cout << (sol.isAnagram(s3, t3) ? "true" : "false") << endl;
    
    return 0;

}
