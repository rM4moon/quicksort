/*
 * sort.h
 *
 *  Created on: 2015Äê11ÔÂ15ÈÕ
 *      Author: Administrator
 */

#ifndef SORT_H_
#define SORT_H_
#include <stdio.h>

#define CHECK_POINTER(p) do{\
	if(NULL == p){\
		printf("%s is NULL\n", #p);\
		return;\
	}\
}while(0)\

class sort
{
public:
	sort(){};
	virtual ~sort(){};

	virtual void go() = 0;
};

#endif /* SORT_H_ */
