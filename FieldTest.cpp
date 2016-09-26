/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, EmptyUpperLeft)
{
	Field minefield;
	
	ASSERT_EQ( EMPTY_HIDDEN, minefield.get(0,0) );
}
TEST(FieldTest, EmptyMidleMidle)
{
	Field minefield;
	
	ASSERT_EQ( EMPTY_HIDDEN, minefield.get(5,5) );
}
TEST(FieldTest, EmptyLowerRight)
{
	Field minefield;
	
	ASSERT_EQ( EMPTY_HIDDEN, minefield.get(9,9) );
}
TEST(FieldTest, EmptyLowerLeft)
{
	Field minefield;
	
	ASSERT_EQ( EMPTY_HIDDEN, minefield.get(0,9) );
}
TEST(FieldTest, EmptyUpperRight)
{
	Field minefield;
	
	ASSERT_EQ( EMPTY_HIDDEN, minefield.get(9,0) );
}

TEST(FieldTest, VDEmptyUPPERLEFT100)
{
	Field minefield(100);
	
	ASSERT_EQ( EMPTY_HIDDEN, minefield.get(0,0) );
}
TEST(FieldTest, VDEmptyLowerRight100)
{
	Field minefield(100);
	
	ASSERT_EQ( EMPTY_HIDDEN, minefield.get(99,99) );
}
