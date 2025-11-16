# Lab 5: Sorting Algorithms

This lab implements various sorting algorithms inspired by LeetCode problems, focusing on comparison-based sorting techniques in C++.

## Files in this Directory
- `google_test/`: Directory containing Google Test files
- Implementation files: `*.cpp` with TODO comments for student completion
- Documentation: `*.md` files with requirements, diagrams, and presentations
- `sorting.cpp`: Template with sorting algorithm declarations
- `sorting.h`: Header file with function declarations
- `sorting_complete.cpp`: Complete implementation for reference
- `sorting_test.cpp`: Google Test suite with comprehensive test cases
- `design_diagrams.md`: Visual representations of sorting algorithms
- `presentation.md`: Lecture notes on sorting algorithms
- `requirements_document.md`: Detailed specifications

## Learning Objectives
- Master sorting algorithms
- Implement comparison-based sorting techniques
- Understand time and space complexity of sorting
- Practice array manipulation in C++

## System Overview
The system implements key sorting algorithms:
- **Bubble Sort**: Repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
- **Selection Sort**: Finds the minimum element in the unsorted portion and swaps it with the first unsorted element.
- **Merge Sort**: Divides the array into two halves, sorts them recursively, and merges the sorted halves.
- **Heap Sort**: Builds a max heap and repeatedly extracts the maximum element.
- **Quick Sort**: Picks a pivot and partitions the array around it.

## Implementation Instructions

**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods in the `.cpp` file, follow these steps to test your code:

### Step 1: Navigate to the google_test directory
```bash
cd google_test
```

### Step 2: Compile the test executable
```bash
g++ *_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o test_executable
```

### Step 3: Run the tests
```bash
./test_executable
```

### Expected Output
You should see output like:
```
[==========] Running X tests from Y test suite.
...
[  PASSED  ] X tests.
```

If all tests pass, your implementation is correct! If tests fail, check your code against the TODO requirements and test expectations.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented with correct signatures.
- **Test failures**: Review the failing test messages and debug your implementation.
- **Missing dependencies**: Make sure Google Test is installed as described in the prerequisites.

## Testing Instructions
1. Install Google Test (see lab_01)
2. Compile: `g++ google_test/sorting_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o sorting_test`
3. Run: `./sorting_test`
4. Verify all tests pass

## Applications
- Data organization
- Search optimization
- Algorithm efficiency studies
- Real-world sorting problems

## Key Properties
- Various time complexities (O(n^2) to O(n log n))
- In-place vs out-of-place sorting
- Stable vs unstable sorts
- Recursive vs iterative implementations

## Common Issues
- Off-by-one errors in loops
- Incorrect swap operations
- Stack overflow in recursive sorts
- Memory leaks in dynamic allocations

## Extensions
- Implement additional sorts (insertion, shell, etc.)
- Add performance benchmarking
- Implement parallel sorting
- Create hybrid sorting algorithms

Master sorting algorithms as a foundation for efficient data processing!