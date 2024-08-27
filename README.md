# Heap Sort Algorithm in C++

## Overview
This project demonstrates the implementation of the Heap Sort algorithm in C++. The code is designed to sort an array of integers using the heap data structure. Heap Sort is a comparison-based sorting technique that utilizes a binary heap. It first converts the array into a max heap, then repeatedly extracts the maximum element to produce the sorted array.

## Features
- **Heapify Function**: Ensures the heap property is maintained for a given subtree.
- **Create Max Heap**: Converts the input array into a max heap.
- **Heap Sort**: Sorts the array by repeatedly extracting the maximum element and re-heapifying the array.
- **Operator Overloading**: Custom `<<` operator to easily print the array.

## Code Structure

### Functions
1. **swap(int &a, int &b)**: Swaps two integers by reference.
2. **heapify(int *arr, int n, int i)**: Maintains the heap property for the subtree rooted at index `i`.
3. **create_max_heap(int *arr, int n)**: Builds a max heap from the input array.
4. **heapsort(int *arr, int n)**: Sorts the array using the heap sort algorithm.
5. **operator<<(std::ostream &dout, int arr[])**: Overloaded operator to print the array.

### Main Function
1. **Initialization**: The array of integers is hard-coded for demonstration purposes.
2. **Sorting**: The array is sorted using heap sort.
3. **Output**: The original and sorted arrays are printed.

## Example Output
```cpp
Original Array: 34 9 7 -1 0 9 -8 65 77 0 -9 3 2 3 44 4 87 6 5 45 
Sorted Array: -9 -8 -1 0 0 2 3 3 4 5 6 7 9 9 34 44 45 65 77 87 
```

## How to Run
1. Clone this repository.
2. Compile the code using a C++ compiler, e.g., `g++ -o heapsort heapsort.cpp`.
3. Run the executable: `./heapsort`.

## Key Concepts
- **Heap Data Structure**: A specialized tree-based structure that satisfies the heap property.
- **Heapify**: Adjusts the tree to maintain the heap property.
- **Max Heap**: A binary heap where each parent node is greater than or equal to its children.

## ASMR Coding Video
Check out the full ASMR coding session where this algorithm is implemented with clear comments and relaxing keystrokes – no voice, just pure coding!

[Watch the ASMR Video](https://shivamchaturvedi.vercel.app/codesnippets#9)
