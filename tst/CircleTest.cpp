#include "gtest/gtest.h"
#include "Circle.h"

class CircleTestFixture: public ::testing::Test {
    public:
    CircleTestFixture() { }

    void SetUp() {
        circle.setDiameter(4);
    }

    void TearDown( ) {
        // teardown for each test goes here
    }

    ~CircleTestFixture() { }

    Circle circle = Circle();
};

TEST_F(CircleTestFixture, Area) {
    EXPECT_NEAR(25.13272, circle.area(), 0.0000001);
}

TEST_F(CircleTestFixture, Circumference) {
    EXPECT_NEAR(12.56636, circle.circumference(), 0.0000001);
}

TEST_F(CircleTestFixture, Diameter) {
    EXPECT_NEAR(4, circle.diameter(), 0.0000001);
}

TEST_F(CircleTestFixture, Radius) {
    EXPECT_NEAR(2, circle.radius(), 0.0000001);
}