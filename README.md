# Coding Challenges

In this repository you can find my solutions to assorted computer science problems.


- [Easy](#easy)
  - [Max Consecutive Ones](#maxConsecutiveOnes)
  - [First Unique Character in a String](#firstUniqueCharacterInString)
  - [Intersection of Two Arrays II](#intersectionOfTwoArrays)
  - [Reverse String](#reverseString)
  - [Move Zeroes](#moveZeroes)
  - [First Bad Version](#firstBadVersion)
  - [Valid Anagram](#validAnagram)
  - [Contains Duplicate](#containsDuplicate)
  - [Reverse Linked List](#reverseLinkedList)
  - [Rotate Array](#rotateArray)
  - [Single Number](#singleNumber)
  - [Best Time To Buy And Sell Stock II](#bestTimeToBuyAndSellStock)
  - [Maximum Depth of Binary Tree](#maximumDepthOfBinaryTree)
  - [Plus One](#plusOne)
  - [Remove Element](#removeElement)
  - [Remove Duplicates From Sorted Array](#removeDuplicatesFromSortedArray)
  - [Valid Parentheses](#validParentheses)
  - [Reverse Integer](#reverseInteger)
  - [Two Sum](#twoSum)
- [Medium](#medium)
    - [Rotting Oranges](#rottingOranges)
    - [Top K Frequent Elements](#topKFrequentElements)
    - [Find the Duplicate Number](#findTheDuplicateNumber)
    - [Search a 2D Matrix II](#searchA2DMatrixII)
    - [Find Peak Element](#findPeakElement)
    - [Sort Colors](#sortColors)
    - [Search a 2D Matrix](#searchA2DMatrix)
    - [Set Matrix Zeroes](#setMatrixZeroes)
    - [Merge Intervals](#mergeIntervals)
    - [Group Anagrams](#groupAnagrams)
    - [Rotate Image](#rotateImage)
    - [Valid Sudoku](#validSudoku)
    - [Find First and Last Position of Element in Sorted Array    ](#firstAndLastPositionOfElementInSortedArray)
    - [Search in Rotated Sorted Array](#searchInRotatedSortedArray)
    - [Container With Most Water](#containerWithMostWater)
    - [ZigZag Conversion](#zigZagConversion)
    - [Longest Substring Without Repeating Characters](#longestSubstringWithoutRepeatingCharacters)


<a name="easy"></a>
## Easy

<a name="maxConsecutiveOnes"></a>
* Max Consecutive Ones from [leetCode](https://leetcode.com/problems/max-consecutive-ones/description/)
>Given a binary array, find the maximum number of consecutive 1s in this array.
Example 1:
>Input: [1,1,0,1,1,1]
>
> Output: 3
>
>Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
>
>Note:
>
>The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000


* [findMaxConsecutiveOnes](https://github.com/mi-prata/CodingChallenges/blob/8112b8ad62b2c6490c2416a44582572d9a55aafd/CodingChallenges/CodingChallenges/find_max_consecutive_ones.cpp#L12)

___
<a name="firstUniqueCharacterInString"></a>
* First Unique Charater in a String from [leetCode](https://leetcode.com/problems/first-unique-character-in-a-string/)
>Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.


* [firstUniqueCharacterInString](https://github.com/mi-prata/CodingChallenges/blob/master/codingChallenges/codingChallenges/reverseInteger.cpp#L11)


___
<a name="reverseInteger"></a>
* Reverse Integer from [leetCode](https://leetcode.com/problems/reverse-integer/)
>Given a 32-bit signed integer, reverse digits of an integer.

* [reverseInteger](https://github.com/mi-prata/CodingChallenges/blob/master/codingChallenges/codingChallenges/reverseInteger.cpp#L11)

___
<a name="twoSum"></a>
* Two Sum from [leetCode](https://leetcode.com/problems/3sum/description/)
> Given an array of integers, return indices of the two numbers such that they add up to a specific target.
>
> You may assume that each input would have exactly one solution, and you may not use the same element twice.

* [twoSum](https://github.com/mi-prata/CodingChallenges/blob/5cd8dbdc5791f60fe7214d74a8c372122a357e02/codingChallenges/codingChallenges/twoSum.cpp#L34)


<a name="medium"></a>
## Medium

<a name="rottingOranges"></a>
*  **Rotting Oranges**, from [leetCode](https://leetcode.com/problems/rotting-oranges/)

>In a given grid, each cell can have one of three values:
> - the value 0 representing an empty cell;
> - the value 1 representing a fresh orange;
> - the value 2 representing a rotten orange.

>Every minute, any fresh orange that is adjacent (4-directionally) to a rotten orange becomes rotten.

>Return the minimum number of minutes that must elapse until no cell has a fresh orange.  If this is impossible, return -1 instead.

![](https://assets.leetcode.com/uploads/2019/02/16/oranges.png)

* [rottingOranges](https://github.com/mi-prata/CodingChallenges/blob/master/codingChallenges/codingChallenges/rottingOranges.cpp)
___
<a name="topKFrequentElements"></a>
*  **Top K Frequent Elements**, from [leetCode](https://leetcode.com/problems/top-k-frequent-elements/)

>Given a non-empty array of integers, return the **<em>k</em>** most frequent elements.

___
<a name="findTheDuplicateNumber"></a>
*  **Find the Duplicate Number**, from [leetCode](https://leetcode.com/problems/find-the-duplicate-number/)

>Given an array <em>nums</em> containing <em>n</em> + 1 integers where each integer is between 1 and <em>n</em> (inclusive), prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.

___
<a name="searchA2DMatrixII"></a>
*  **Search a 2D Matrix II**, from [leetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/)

>Write an efficient algorithm that searches for a value in an <em>m x n</em> matrix. This matrix has the following properties:
> - Integers in each row are sorted in ascending from left to right.
> - Integers in each column are sorted in ascending from top to bottom.

___
<a name="findPeakElement"></a>
*  **Find Peak Element**, from [leetCode](https://leetcode.com/problems/find-peak-element/)

> A peak element is an element that is greater than its neighbors.

>Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.

>The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.


___
<a name="sortColors"></a>
*  **Sort Colors**, from [leetCode](https://leetcode.com/problems/sort-colors/)

>Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

>Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.


___
<a name="searchA2DMatrix"></a>
*  **Search a 2D Matrix**, from [leetCode](https://leetcode.com/problems/search-a-2d-matrix/)

>Write an efficient algorithm that searches for a value in an <em>m x n</em> matrix. This matrix has the following properties:
> - Integers in each row are sorted from left to right.
> - The first integer of each row is greater than the last integer of the previous row.

___
<a name="setMatrixZeroes"></a>
*  **Set Matrix Zeroes**, from [leetCode](https://leetcode.com/problems/set-matrix-zeroes/)

>Given a <em>m x n</em> matrix, if an element is 0, set its entire row and column to 0. Do it **in-place**.

___
<a name="mergeIntervals"></a>
* **Merge Intervals**, from [leetCode](https://leetcode.com/problems/merge-intervals/)

>Given a collection of intervals, merge all overlapping intervals.

___
<a name="groupAnagrams"></a>
* **Group Anagrams**, from [leetCode](https://leetcode.com/problems/group-anagrams/)

>Given an array of strings, group anagrams together.

___
<a name="rotateImage"></a>
* **Rotate Image**, from [leetCode](https://leetcode.com/problems/rotate-image/)

>You are given an n x n 2D matrix representing an image.

>Rotate the image by 90 degrees (clockwise).

>**Note:**
>You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.


___
<a name="validSudoku"></a>
* **Valid Sudoku**, from [leetCode](https://leetcode.com/problems/valid-sudoku/)

>Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

> - Each row must contain the digits 1-9 without repetition.
> - Each column must contain the digits 1-9 without repetition.
> - Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9 without repetition.

___
<a name="firstAndLastPositionOfElementInSortedArray"></a>
* **Find First and Last Position of Element in Sorted Array**, from [leetCode](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

>Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

>Your algorithm's runtime complexity must be in the order of <em>O(log n)</em>.
>If the target is not found in the array, return [-1, -1].

>Example: Input: nums = [5,7,7,8,8,10], target = 8. Output: [3,4]

___
<a name="searchInRotatedSortedArray"></a>
* **Search in Rotated Sorted Array**, from [leetCode](https://leetcode.com/problems/search-in-rotated-sorted-array/)

>Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

>(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

>You are given a target value to search. If found in the array return its index, otherwise return -1.

>You may assume no duplicate exists in the array.

>Your algorithm's runtime complexity must be in the order of <em>O(log n)</em>.

>Example:
Input: nums = [4,5,6,7,0,1,2], target = 0. Output: 4


[searchInRotatedSortedArray](https://github.com/mi-prata/CodingChallenges/blob/1fdf1b17b4520cd496df0213a3b1b78f21fef8e6/CodingChallenges/CodingChallenges/zig_zag_conversion.cpp#L9)


___

<a name="containerWithMostWater"></a>
* **Container With Most Water**, from [leetCode](https://leetcode.com/problems/container-with-most-water/)
>Given n non-negative integers <em>a<sub>1</sub></em>, <em>a<sub>2</sub></em>, ..., <em>a<sub>n</sub></em> , where each represents a point at coordinate (<em>i</em>, <em>a<sub>i</sub></em>). <em>n</em> vertical lines are drawn such that the two endpoints of line <em>i</em> is at (<em>i</em>, <em>a<sub>i</sub></em>) and (<em>i</em>, 0). Find two lines, which together with <em>x</em>-axis forms a container, such that the container contains the most water.
>**Note:** You may not slant the container and <em>n</em> is at least 2

![](https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg)

The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

[containerWithMostWater](https://github.com/mi-prata/CodingChallenges/blob/master/codingChallenges/codingChallenges/containerWithMostWater.cpp#L11)

___
<a name="zigZagConversion"></a>
* **ZigZag Conversion**, from [leetCode](https://leetcode.com/problems/zigzag-conversion/description/)
>Receives a string and writes it in zig zag pattern across a given number of rows (input parameter).


[convertZigZag](https://github.com/mi-prata/CodingChallenges/blob/1fdf1b17b4520cd496df0213a3b1b78f21fef8e6/CodingChallenges/CodingChallenges/zig_zag_conversion.cpp#L9)


___
<a name="longestSubstringWithoutRepeatingCharacters"></a>
* **Longest Substring Without Repeating Characters**, from [leetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)
>Given a string, find the length of the longest substring without repeating characters.
Examples:
>
>Given "abcabcbb", the answer is "abc", which the length is 3.
>
>Given "bbbbb", the answer is "b", with the length of 1.
>
>Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

[longest_Substring](https://github.com/mi-prata/CodingChallenges/blob/8112b8ad62b2c6490c2416a44582572d9a55aafd/CodingChallenges/CodingChallenges/longest_substring.cpp#L11)
