/*
 * quicksort.h
 *
 *  Created on: 2015Äê11ÔÂ15ÈÕ
 *      Author: Administrator
 */

#ifndef QUICKSORT_H_
#define QUICKSORT_H_
#include "sort.h"

class quicksort : public sort
{
public:
	quicksort(){}
	~quicksort(){};

	void go(){};
	void go(int a[], int low, int high);
	void print(int a[], int len);
private:

};

#endif /* QUICKSORT_H_ */
