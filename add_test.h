#ifndef ADD_TEST_H
#define ADD_TEST_H

#include <gtest/gtest.h>
#include "../add.h"

TEST(ProjectTest, Addition){

    EXPECT_EQ(add(25, 25), 50);
}

#endif
