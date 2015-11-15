/*
 * quicksortTest.cpp
 *
 *  Created on: 2015Äê11ÔÂ15ÈÕ
 *      Author: Administrator
 */

#include "quicksortTest.h"
#include<stdlib.h>
#include<sys/time.h>
#define random(x) (rand()%x)

void QuicksortTest::SetUpTestCase()
{
	printf("QuicksortTest TestSuite Environment Set-Up. \n");
}

void QuicksortTest::TearDownTestCase()
{
	printf("QuicksortTest TestSuite Environment Tear-Down. \n");
}

void QuicksortTest::SetUp()
{
	printf("QuicksortTest TestCase Environment Set-up. \n");
}

void QuicksortTest::TearDown()
{
	printf("QuicksortTest TestCase Environment Tear-Down. \n");
}


TEST_F(QuicksortTest, test0)
{
	printf("hello QuicksortTest test0\n");

	quicksort *pQuickSort = new quicksort();
	timeval currentTimeBegin;
	timeval currentTimeEnd;

	int arrayNum = 500000;
	int a[arrayNum];
	srand((int)time(0));
	for(int x=0;x<arrayNum;x++)
	{
		a[x] = random(500000);
	}
//	pQuickSort->print(a, sizeof(a) / sizeof(a[0]));
	printf("\n\n------------------------------\n\n");

	(void)gettimeofday(&currentTimeBegin, NULL);
	pQuickSort->go(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	(void)gettimeofday(&currentTimeEnd, NULL);
	printf("QuickSort total using time : %lu us\n\n",
			(currentTimeEnd.tv_sec*1000*1000 + currentTimeEnd.tv_usec - currentTimeBegin.tv_sec*1000*1000 - currentTimeBegin.tv_usec));

//	pQuickSort->print(a, sizeof(a) / sizeof(a[0]));

	delete pQuickSort;
	pQuickSort = NULL;
}

