
#include "pch.h"
#include "CppUnitTest.h"

        extern "C" {
#include "../BCSRec/functions.h"
        }

        using namespace Microsoft::VisualStudio::CppUnitTestFramework;

        namespace RectangleTests
        {
            TEST_CLASS(CalculationTests)
            {
            public:
            

                TEST_METHOD(getPerimeterReturnsCorrectPerimeter)
                {
                    // Arrange
                    int length = 10;
                    int width = 20;
                    int expected = 60; // 2 * (10 + 20)

                    // Act
                    int actual = getPerimeter(length, width);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(getPerimeterReturnsFour)
                {
                    // Arrange
                    int length = 1;
                    int width = 1;
                    int expected = 4; // 2 * (1 + 1)

                    // Act
                    int actual = getPerimeter(length, width);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(getPerimeterReturnsThreeHundredNinetySix)
                {
                    // Arrange
                    int length = 99;
                    int width = 99;
                    int expected = 396; // 2 * (99 + 99)

                    // Act
                    int actual = getPerimeter(length, width);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                // --- getArea Tests ---

                TEST_METHOD(getArea_NominalValues_ReturnsCorrectArea)
                {
                    // Arrange
                    int length = 5;
                    int width = 10;
                    int expected = 50; // 5 * 10

                    // Act
                    int actual = getArea(length, width);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(getAreaReturnsOne)
                {
                    // Arrange
                    int length = 1;
                    int width = 1;
                    int expected = 1; // 1 * 1

                    // Act
                    int actual = getArea(length, width);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(getAreaReturnsNineThousandEightHundredOne)
                {
                    // Arrange
                    int length = 99;
                    int width = 99;
                    int expected = 9801; // 99 * 99

                    // Act
                    int actual = getArea(length, width);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }
            };
        }
        namespace RectangleTests
        {
            TEST_CLASS(MutatorTests)
            {
            public:
                // --- setLength Tests ---

                TEST_METHOD(setLength_NominalValue_SetsLength)
                {
                    // Arrange
                    int input = 50;
                    int expected = 50;

                    // Act
                    int actual = setLength(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setLength_MinBoundaryOne_SetsLengthToOne)
                {
                    // Arrange
                    int input = 1;
                    int expected = 1;

                    // Act
                    int actual = setLength(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setLength_MaxBoundaryNinetyNine_SetsLengthToNinetyNine)
                {
                    // Arrange
                    int input = 99;
                    int expected = 99;

                    // Act
                    int actual = setLength(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setLength_Zero_DefaultsToOne)
                {
                    // Arrange
                    int input = 0;
                    int expected = 1;

                    // Act
                    int actual = setLength(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setLength_NegativeInput_DefaultsToOne)
                {
                    // Arrange
                    int input = -25;
                    int expected = 1;

                    // Act
                    int actual = setLength(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setLength_AboveMaxBoundary_DefaultsToOne)
                {
                    // Arrange
                    int input = 100;
                    int expected = 1;

                    // Act
                    int actual = setLength(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                // --- setWidth Tests ---

                TEST_METHOD(setWidth_NominalValue_SetsWidth)
                {
                    // Arrange
                    int input = 40;
                    int expected = 40;

                    // Act
                    int actual = setWidth(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setWidth_MinBoundaryOne_SetsWidthToOne)
                {
                    // Arrange
                    int input = 1;
                    int expected = 1;

                    // Act
                    int actual = setWidth(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setWidth_MaxBoundaryNinetyNine_SetsWidthToNinetyNine)
                {
                    // Arrange
                    int input = 99;
                    int expected = 99;

                    // Act
                    int actual = setWidth(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setWidth_NegativeInput_DefaultsToOne)
                {
                    // Arrange
                    int input = -10;
                    int expected = 1;

                    // Act
                    int actual = setWidth(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }

                TEST_METHOD(setWidth_AboveMaxBoundary_DefaultsToOne)
                {
                    // Arrange
                    int input = 120;
                    int expected = 1;

                    // Act
                    int actual = setWidth(input);

                    // Assert
                    Assert::AreEqual(expected, actual);
                }
            };
        }

