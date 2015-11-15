/*
 * quicksort.cpp
 *
 *  Created on: 2015年11月15日
 *      Author: Administrator
 */
#include "quicksort.h"
#include <sys/time.h>

void quicksort::print(int a[], int len)
{
	for(int i = 0; i < len; i++)
	{
		printf("a[%d]: [%d]\t", i, a[i]);
		if((0 != i) && (0 == (i&0x7))){
			printf("\n");
		}
	}
	printf("\n");
}

void quicksort::go(int a[], int low, int high)
{
	if(low >= high)
	{
		return;
	}
	int first = low;
	int last = high;
	int key = a[first];/*用字表的第一个记录作为枢轴*/

	while(first < last)
	{
		while(first < last && a[last] >= key)
		{
			--last;
		}

		a[first] = a[last];/*将比第一个小的移到低端*/

		while(first < last && a[first] <= key)
		{
			++first;
		}

		a[last] = a[first];
	/*将比第一个大的移到高端*/
	}
	a[first] = key;/*枢轴记录到位*/
	go(a, low, first-1);
	go(a, first+1, high);

}
