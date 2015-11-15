/*
 * quicksortTest.h
 *
 *  Created on: 2015Äê11ÔÂ15ÈÕ
 *      Author: Administrator
 */

#ifndef QUICKSORTTEST_H_
#define QUICKSORTTEST_H_

#include "../sort/quicksort.h"
#include <gtest/gtest.h>
#include <stdio.h>

class QuicksortTest : public testing::Test
{
public:

protected:
	static void SetUpTestCase();
	static void TearDownTestCase();

protected:
	virtual void SetUp();
	virtual void TearDown();
};

#endif /* QUICKSORTTEST_H_ */
