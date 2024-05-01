# CountingSort Algorithm: A Variation of Rank Sort

This project implements a variation of the Counting Sort algorithm, which is closely related to the Rank Sort algorithm.

## Principle

The principle behind this variation is as follows: For each element of an array, 𝐴[𝑖], if there are 𝑘 elements less than A[i] in 𝐴[ ], then after the array is sorted, 𝐴[𝑖] will eventually be stored in 𝐴[𝑘]. This principle is a key aspect of the Rank Sort algorithm.

## Counting Sort Algorithm

The Counting Sort algorithm is based on the above principle. For each element of array 𝐴, count the total number of elements of 𝐴 that are less than it. This count determines the final index/position at which the element is to be stored in the sorted version of 𝐴. This is a direct application of the principle of Rank Sort, making this variation of Counting Sort closely related to Rank Sort.
