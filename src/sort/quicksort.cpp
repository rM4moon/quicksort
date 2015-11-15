/*
 * quicksort.cpp
 *
 *  Created on: 2015��11��15��
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
	int key = a[first];/*���ֱ�ĵ�һ����¼��Ϊ����*/

	while(first < last)
	{
		while(first < last && a[last] >= key)
		{
			--last;
		}

		a[first] = a[last];/*���ȵ�һ��С���Ƶ��Ͷ�*/

		while(first < last && a[first] <= key)
		{
			++first;
		}

		a[last] = a[first];
	/*���ȵ�һ������Ƶ��߶�*/
	}
	a[first] = key;/*�����¼��λ*/
	go(a, low, first-1);
	go(a, first+1, high);

}
