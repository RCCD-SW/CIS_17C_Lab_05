# Design Diagrams for Queues

## Queue Class Diagram
```
Queue
- q: queue<int>
+ enqueue(value: int): void
+ dequeue(): void
+ front(): int
+ empty(): bool
+ size(): size_t
```

## FIFO Illustration
```
Enqueue 1: [1]
Enqueue 2: [1, 2]
Enqueue 3: [1, 2, 3]
Front: 1
Dequeue: [2, 3]
Front: 2
```

## Operations Flowchart
- Enqueue: Add to back of queue
- Dequeue: Remove from front (if not empty)
- Front: Return front element (if not empty)
- Empty: Check queue empty
- Size: Return queue size
