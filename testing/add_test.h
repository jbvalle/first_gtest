#include <gtest/gtest.h>
#include "../add.h"

TEST(ProjectTest, Addition){

    EXPECT_EQ(add(5,5), 10);
    EXPECT_EQ(add(10,10), 20);
    EXPECT_EQ(add(50, 50), 100);
    EXPECT_EQ(add(500,500), 1000);
}


