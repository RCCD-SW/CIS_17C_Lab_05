#include <gtest/gtest.h>

// Include the student's implementation
#include "../queues.cpp"

// Test cases

TEST(QueueTest, Enqueue) {
    Queue q;
    q.enqueue(1);
    EXPECT_EQ(q.size(), 1);
    EXPECT_EQ(q.front(), 1);
}

TEST(QueueTest, Dequeue) {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    EXPECT_EQ(q.size(), 1);
    EXPECT_EQ(q.front(), 2);
}

TEST(QueueTest, Front) {
    Queue q;
    q.enqueue(5);
    EXPECT_EQ(q.front(), 5);
}

TEST(QueueTest, Empty) {
    Queue q;
    EXPECT_TRUE(q.empty());
    q.enqueue(1);
    EXPECT_FALSE(q.empty());
}

TEST(QueueTest, Size) {
    Queue q;
    EXPECT_EQ(q.size(), 0);
    q.enqueue(1);
    EXPECT_EQ(q.size(), 1);
}

TEST(QueueTest, FrontEmptyQueue) {
    Queue q;
    EXPECT_THROW(q.front(), std::out_of_range);
}

TEST(QueueTest, DequeueEmptyQueue) {
    Queue q;
    q.dequeue();
    EXPECT_TRUE(q.empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
