#include "gtest/gtest.h"
#include "Circle.h"

class CircleTestFixture: public ::testing::Test {
    public:
    CircleTestFixture() { }

    void SetUp() {
        // setup for each test goes here
    }

    void TearDown( ) {
        // teardown for each test goes here
    }

    ~CircleTestFixture() { }

    Circle circle = Circle();
};

TEST_F(CircleTestFixture, Area) {
    circle.setDiameter(4);
    EXPECT_NEAR(25.13272, circle.area(), 0.0000001);
}

TEST_F(CircleTestFixture, Circumference) {
    circle.setDiameter(4);
    EXPECT_NEAR(12.56636, circle.circumference(), 0.0000001);
}

TEST_F(CircleTestFixture, Diameter) {
    circle.setDiameter(4);
    EXPECT_NEAR(4, circle.diameter(), 0.0000001);
}

TEST_F(CircleTestFixture, Radius) {
    circle.setDiameter(4);
    EXPECT_NEAR(2, circle.radius(), 0.0000001);
}