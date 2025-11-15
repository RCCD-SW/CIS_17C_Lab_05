#include <iostream>
#include <vector>
#include "sorting.h"

int main() {
    std::vector<int> original = {5, 2, 9, 1, 5, 6};

    auto print = [](const std::vector<int>& arr) {
        for (int num : arr) std::cout << num << " ";
        std::cout << std::endl;
    };

    std::cout << "Original: ";
    print(original);

    // Bubble Sort
    std::vector<int> arr1 = original;
    bubbleSort(arr1);
    std::cout << "Bubble Sort: ";
    print(arr1);

    // Selection Sort
    std::vector<int> arr2 = original;
    selectionSort(arr2);
    std::cout << "Selection Sort: ";
    print(arr2);

    // Merge Sort
    std::vector<int> arr3 = original;
    mergeSort(arr3);
    std::cout << "Merge Sort: ";
    print(arr3);

    // Heap Sort
    std::vector<int> arr4 = original;
    heapSort(arr4);
    std::cout << "Heap Sort: ";
    print(arr4);

    // Quick Sort
    std::vector<int> arr5 = original;
    quickSort(arr5);
    std::cout << "Quick Sort: ";
    print(arr5);

    return 0;
}