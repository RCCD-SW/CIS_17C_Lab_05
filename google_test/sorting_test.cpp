#include <gtest/gtest.h>
#include <vector>
#include "../sorting.h"

// Bubble Sort Tests
TEST(BubbleSortTest, BasicSort) {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 5, 5, 6, 9}));
}

TEST(BubbleSortTest, AlreadySorted) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(BubbleSortTest, ReverseSorted) {
    std::vector<int> arr = {5, 4, 3, 2, 1};
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(BubbleSortTest, EmptyArray) {
    std::vector<int> arr;
    bubbleSort(arr);
    EXPECT_EQ(arr, std::vector<int>());
}

TEST(BubbleSortTest, SingleElement) {
    std::vector<int> arr = {42};
    bubbleSort(arr);
    EXPECT_EQ(arr, std::vector<int>({42}));
}

TEST(BubbleSortTest, Duplicates) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 4, 5, 5, 6, 9}));
}

TEST(BubbleSortTest, NegativeNumbers) {
    std::vector<int> arr = {-3, -1, -4, -1, -5};
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -3, -1, -1}));
}

TEST(BubbleSortTest, MixedNumbers) {
    std::vector<int> arr = {-2, 0, 2, -1, 1};
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-2, -1, 0, 1, 2}));
}

TEST(BubbleSortTest, AllSame) {
    std::vector<int> arr = {7, 7, 7, 7};
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{7, 7, 7, 7}));
}

TEST(BubbleSortTest, LargeArray) {
    std::vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}));
}

// Selection Sort Tests
TEST(SelectionSortTest, BasicSort) {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 5, 5, 6, 9}));
}

TEST(SelectionSortTest, AlreadySorted) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(SelectionSortTest, ReverseSorted) {
    std::vector<int> arr = {5, 4, 3, 2, 1};
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(SelectionSortTest, EmptyArray) {
    std::vector<int> arr;
    selectionSort(arr);
    EXPECT_EQ(arr, std::vector<int>());
}

TEST(SelectionSortTest, SingleElement) {
    std::vector<int> arr = {42};
    selectionSort(arr);
    EXPECT_EQ(arr, std::vector<int>({42}));
}

TEST(SelectionSortTest, Duplicates) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 4, 5, 5, 6, 9}));
}

TEST(SelectionSortTest, NegativeNumbers) {
    std::vector<int> arr = {-3, -1, -4, -1, -5};
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -3, -1, -1}));
}

TEST(SelectionSortTest, MixedNumbers) {
    std::vector<int> arr = {-2, 0, 2, -1, 1};
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-2, -1, 0, 1, 2}));
}

TEST(SelectionSortTest, AllSame) {
    std::vector<int> arr = {7, 7, 7, 7};
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{7, 7, 7, 7}));
}

TEST(SelectionSortTest, LargeArray) {
    std::vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}));
}

// Merge Sort Tests
TEST(MergeSortTest, BasicSort) {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    mergeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 5, 5, 6, 9}));
}

TEST(MergeSortTest, AlreadySorted) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    mergeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(MergeSortTest, ReverseSorted) {
    std::vector<int> arr = {5, 4, 3, 2, 1};
    mergeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(MergeSortTest, EmptyArray) {
    std::vector<int> arr;
    mergeSort(arr);
    EXPECT_EQ(arr, std::vector<int>());
}

TEST(MergeSortTest, SingleElement) {
    std::vector<int> arr = {42};
    mergeSort(arr);
    EXPECT_EQ(arr, std::vector<int>({42}));
}

TEST(MergeSortTest, Duplicates) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    mergeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 4, 5, 5, 6, 9}));
}

TEST(MergeSortTest, NegativeNumbers) {
    std::vector<int> arr = {-3, -1, -4, -1, -5};
    mergeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -3, -1, -1}));
}

TEST(MergeSortTest, MixedNumbers) {
    std::vector<int> arr = {-2, 0, 2, -1, 1};
    mergeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-2, -1, 0, 1, 2}));
}

TEST(MergeSortTest, AllSame) {
    std::vector<int> arr = {7, 7, 7, 7};
    mergeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{7, 7, 7, 7}));
}

TEST(MergeSortTest, LargeArray) {
    std::vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    mergeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}));
}

// Heap Sort Tests
TEST(HeapSortTest, BasicSort) {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    heapSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 5, 5, 6, 9}));
}

TEST(HeapSortTest, AlreadySorted) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    heapSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(HeapSortTest, ReverseSorted) {
    std::vector<int> arr = {5, 4, 3, 2, 1};
    heapSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(HeapSortTest, EmptyArray) {
    std::vector<int> arr;
    heapSort(arr);
    EXPECT_EQ(arr, std::vector<int>());
}

TEST(HeapSortTest, SingleElement) {
    std::vector<int> arr = {42};
    heapSort(arr);
    EXPECT_EQ(arr, std::vector<int>({42}));
}

TEST(HeapSortTest, Duplicates) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    heapSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 4, 5, 5, 6, 9}));
}

TEST(HeapSortTest, NegativeNumbers) {
    std::vector<int> arr = {-3, -1, -4, -1, -5};
    heapSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -3, -1, -1}));
}

TEST(HeapSortTest, MixedNumbers) {
    std::vector<int> arr = {-2, 0, 2, -1, 1};
    heapSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-2, -1, 0, 1, 2}));
}

TEST(HeapSortTest, AllSame) {
    std::vector<int> arr = {7, 7, 7, 7};
    heapSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{7, 7, 7, 7}));
}

TEST(HeapSortTest, LargeArray) {
    std::vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    heapSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}));
}

// Quick Sort Tests
TEST(QuickSortTest, BasicSort) {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    quickSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 5, 5, 6, 9}));
}

TEST(QuickSortTest, AlreadySorted) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    quickSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(QuickSortTest, ReverseSorted) {
    std::vector<int> arr = {5, 4, 3, 2, 1};
    quickSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(QuickSortTest, EmptyArray) {
    std::vector<int> arr;
    quickSort(arr);
    EXPECT_EQ(arr, std::vector<int>());
}

TEST(QuickSortTest, SingleElement) {
    std::vector<int> arr = {42};
    quickSort(arr);
    EXPECT_EQ(arr, std::vector<int>({42}));
}

TEST(QuickSortTest, Duplicates) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    quickSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 4, 5, 5, 6, 9}));
}

TEST(QuickSortTest, NegativeNumbers) {
    std::vector<int> arr = {-3, -1, -4, -1, -5};
    quickSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -3, -1, -1}));
}

TEST(QuickSortTest, MixedNumbers) {
    std::vector<int> arr = {-2, 0, 2, -1, 1};
    quickSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-2, -1, 0, 1, 2}));
}

TEST(QuickSortTest, AllSame) {
    std::vector<int> arr = {7, 7, 7, 7};
    quickSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{7, 7, 7, 7}));
}

TEST(QuickSortTest, LargeArray) {
    std::vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    quickSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}));
}