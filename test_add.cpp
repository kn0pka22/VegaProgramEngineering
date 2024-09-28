#include <gtest/gtest.h>


#include "func.hpp"



TEST(Add, Simple){
    EXPECT_EQ(my_add(2,2), 4);
    EXPECT_EQ(my_add(2,3), my_add(3,2));
    EXPECT_EQ(my_add(-42,3), -39);
   
    //EXPECT_NEAR(0.1+0.1+0.1,1e-7);

}