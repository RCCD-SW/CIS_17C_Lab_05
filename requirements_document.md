# Requirements Document for Lab 5: Sorting Algorithms

## Objective

Implement various sorting algorithms commonly encountered in coding interviews and LeetCode problems, demonstrating understanding of different sorting techniques and their complexities.

## Functional Requirements

### 1. Sorting Functions

Implement the following sorting algorithms as functions that take a reference to a `std::vector<int>` and sort it in-place:

- `void bubbleSort(std::vector<int>& arr)`
- `void selectionSort(std::vector<int>& arr)`
- `void mergeSort(std::vector<int>& arr)`
- `void heapSort(std::vector<int>& arr)`
- `void quickSort(std::vector<int>& arr)`

### 2. Correctness

Each sorting function must correctly sort the array in non-decreasing order.

### 3. Time Complexity

- Bubble Sort: O(n²)
- Selection Sort: O(n²)
- Merge Sort: O(n log n)
- Heap Sort: O(n log n)
- Quick Sort: O(n log n) average case

### 4. Space Complexity

- Bubble Sort: O(1)
- Selection Sort: O(1)
- Merge Sort: O(n)
- Heap Sort: O(1)
- Quick Sort: O(log n) due to recursion stack

## Non-Functional Requirements

### 1. Code Quality

- Use clear, readable code with appropriate comments.
- Follow C++ best practices and use standard library where appropriate.

### 2. Testing

- Provide unit tests using Google Test framework.
- Tests should cover basic sorting, empty arrays, single elements, and potentially large arrays.

### 3. Build System

- Use CMake for building the project.
- Ensure compatibility with C++17 standard.

## Deliverables

- `sorting.h`: Header file with function declarations.
- `sorting.cpp`: Implementation of sorting functions.
- `sorting_complete.cpp`: Complete implementation in a single file.
- `main.cpp`: Demonstration program.
- `google_test/sorting_test.cpp`: Unit tests.
- Documentation files: README.md, requirements_document.md, design_diagrams.md, presentation.md.

## Constraints

- All sorting functions must modify the input vector in-place.
- Use only standard C++ libraries (no external dependencies except Google Test for testing).