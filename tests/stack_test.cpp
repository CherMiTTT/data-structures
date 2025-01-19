#include "../stack.h"
#include <gtest/gtest.h>

TEST(StackLLTest, BasicAssert) {
    auto st = new stack_linked_list<int>();
    for(int i = 0; i < 10; i++) {
        st->push(i);
    }

    for(int i = 9; i >= 0; i--) {
        EXPECT_FALSE(st->empty());
        EXPECT_EQ(st->pop(), i);
    }
    EXPECT_TRUE(st->empty());

    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7 * 6, 42);
}