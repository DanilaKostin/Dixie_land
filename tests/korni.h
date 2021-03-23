#ifndef KORNI_H
#define KORNI_H
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "myfunc.h"
}

TEST(korniTest, usuall_diskr_zero) {
cor korni = f(1,2,1);
ASSERT_EQ( -1, korni.x1);
ASSERT_EQ(  1, korni.count);
}
TEST(korniTest, nokoren) {
cor korni = f(1,2,100);
ASSERT_EQ( 0 , korni.count);
}

TEST(korniTest, twokoren) {
cor korni = f(1,-1,0);
ASSERT_EQ(0, korni.x1);
ASSERT_EQ(1, korni.x2);
ASSERT_EQ(2, korni.count);
}

TEST(korniTestNegative, A_empty) {
cor korni = f(0,1,1);
ASSERT_EQ(-1, korni.x1);
ASSERT_EQ( 1, korni.count);
}

TEST(korniTestNegative, B_empty) {
cor korni = f(5,0,-5);
ASSERT_EQ(-1, korni.x1);
ASSERT_EQ( 1, korni.x2);
ASSERT_EQ(2, korni.count);
}

TEST(korniTestNegative, A_and_B_empty) {
cor korni = f(0,0,1);
ASSERT_EQ(0, korni.count);
}

TEST(korniTestNegative, allempty) { //означает, что корней бесконечно много - а значит count - INF (причем бесконечность "с точкой" (double))
cor korni = f(0,0,0);
ASSERT_EQ(FP_INFINITE, korni.count);
}
#endif // KORNI_H
