# Lab 05 - Queues

This lab implements the queue data structure using std::queue, demonstrating FIFO (First In, First Out) behavior.

## Files in this Directory
- `google_test/`: Directory containing Google Test files
- Implementation files: `*.cpp` with TODO comments for student completion
- Documentation: `*.md` files with requirements, diagrams, and presentations
- `queues.cpp`: Queue class template with TODO implementations
- `queues_test.cpp`: Test suite with 7 comprehensive test cases
- `design_diagrams.md`: Queue operation visualizations
- `presentation.md`: Queue concepts and applications
- `requirements_document.md`: Detailed specifications

## Learning Objectives
- Understand FIFO principle
- Implement queue using existing data structures
- Handle queue operations and error conditions
- Apply queues to problem-solving

## Queue Operations
- **enqueue(value)**: Add element to rear
- **dequeue()**: Remove front element
- **front()**: Access front element without removal
- **empty()**: Check if queue is empty
- **size()**: Get number of elements

## Implementation Instructions

## Testing Your Implementation

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

Implement the Queue class methods according to the TODO comments:
- Use std::queue as underlying storage
- Handle empty queue conditions appropriately
- Maintain O(1) time complexity for all operations

## Testing Instructions
1. Install Google Test (see lab_01)
2. Compile: `g++ google_test/queues_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o queues_test`
3. Run: `./queues_test`
4. Verify 7/7 tests pass

## Test Cases Explained
1. **Enqueue**: Basic element addition
2. **Dequeue**: Element removal
3. **Front**: Access without removal
4. **Empty**: Empty state detection
5. **Size**: Element count tracking
6. **FrontEmptyQueue**: Exception handling
7. **DequeueEmptyQueue**: Safe empty operations

## Applications
- Task scheduling
- Breadth-first search
- Print job management
- Customer service queues
- Message processing

## Key Properties
- FIFO access pattern
- O(1) enqueue, dequeue, front operations
- Simple implementation
- Sequential access

## Common Issues
- Forgetting empty checks before dequeue/front
- Incorrect exception types
- Confusing with stack operations

## Extensions
- Implement queue using linked list
- Add priority queue
- Implement circular queue
- Create queue-based simulation

Master queues for understanding sequential processing!
## Testing Your Implementation

**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods, follow these steps to test your code:

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
You should see tests passing if your implementation is correct.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented.
- **Test failures**: Debug based on error messages.
- **Dependencies**: Verify Google Test installation.
