# Lab 5: Sorting Algorithms

This lab implements various sorting algorithms inspired by LeetCode problems: Bubble Sort, Selection Sort, Merge Sort, Heap Sort, and Quick Sort.

## Algorithms Implemented

- **Bubble Sort**: Repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
- **Selection Sort**: Finds the minimum element in the unsorted portion and swaps it with the first unsorted element.
- **Merge Sort**: Divides the array into two halves, sorts them recursively, and merges the sorted halves.
- **Heap Sort**: Builds a max heap and repeatedly extracts the maximum element.
- **Quick Sort**: Picks a pivot and partitions the array around it.

## Building the Project

```bash
mkdir build
cd build
cmake ..
make
```

## Running the Main Program

```bash
./sorting_main
```

This will demonstrate each sorting algorithm on a sample array.

## Running Tests

```bash
./sorting_test
```

This runs unit tests using Google Test to verify the correctness of each sorting algorithm.