// Lab 05: Queues
// Implement a queue using std::queue
// Complete the TODO sections
// Test with: g++ queues_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o queues_test && ./queues_test

#include <iostream>
#include <queue>

// TODO: Include <stdexcept>

class Queue {
private:
    std::queue<int> q;

public:
    void enqueue(int value) {
        // TODO: Add to queue
    }

    void dequeue() {
        // TODO: Remove from front if not empty
    }

    int front() const {
        // TODO: Return front element, throw if empty
    }

    bool empty() const {
        // TODO: Check if queue empty
    }

    size_t size() const {
        // TODO: Return queue size
    }
};

int main() {
    // TODO: Test your queue
    Queue qu;
    std::cout << "Implement the Queue class!" << std::endl;
    return 0;
}
