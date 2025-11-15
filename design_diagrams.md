# Design Diagrams for Lab 5: Sorting Algorithms

## Overview

This document provides design details and algorithmic descriptions for the implemented sorting algorithms.

## Bubble Sort

**Algorithm:**
```
for i from 0 to n-2:
    for j from 0 to n-i-2:
        if arr[j] > arr[j+1]:
            swap arr[j] and arr[j+1]
```

**Flow:**
- Repeatedly steps through the array
- Compares adjacent elements and swaps if out of order
- Each pass moves the largest element to the end
- Continues until no swaps are needed

## Selection Sort

**Algorithm:**
```
for i from 0 to n-2:
    minIdx = i
    for j from i+1 to n-1:
        if arr[j] < arr[minIdx]:
            minIdx = j
    swap arr[i] and arr[minIdx]
```

**Flow:**
- Finds the minimum element in the unsorted portion
- Swaps it with the first unsorted element
- Repeats for each position

## Merge Sort

**Algorithm:**
```
mergeSort(arr, left, right):
    if left < right:
        mid = left + (right - left) / 2
        mergeSort(arr, left, mid)
        mergeSort(arr, mid+1, right)
        merge(arr, left, mid, right)

merge(arr, left, mid, right):
    Create temp arrays L and R
    Copy elements to L and R
    Merge back to arr[left..right]
```

**Flow:**
- Divide: Split array into two halves
- Conquer: Recursively sort both halves
- Combine: Merge the sorted halves

## Heap Sort

**Algorithm:**
```
heapSort(arr):
    n = arr.size()
    // Build max heap
    for i from n/2-1 downto 0:
        heapify(arr, n, i)
    // Extract elements
    for i from n-1 downto 1:
        swap arr[0] and arr[i]
        heapify(arr, i, 0)

heapify(arr, n, i):
    largest = i
    left = 2*i + 1
    right = 2*i + 2
    if left < n and arr[left] > arr[largest]: largest = left
    if right < n and arr[right] > arr[largest]: largest = right
    if largest != i:
        swap arr[i] and arr[largest]
        heapify(arr, n, largest)
```

**Flow:**
- Build a max heap from the array
- Repeatedly extract the maximum element (root) and rebuild heap

## Quick Sort

**Algorithm:**
```
quickSort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)

partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j from low to high-1:
        if arr[j] < pivot:
            i++
            swap arr[i] and arr[j]
    swap arr[i+1] and arr[high]
    return i+1
```

**Flow:**
- Choose a pivot element
- Partition array around pivot (smaller left, larger right)
- Recursively sort left and right partitions

## Data Flow

All algorithms operate on a `std::vector<int>` passed by reference, modifying it in-place. The main program creates copies of the original array for each sorting demonstration to show the before/after states.