//============================================================================
// Name        : helloWorld.cpp
// Author      : zhoujunying
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <gtest/gtest.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	char gtestFilter[200] = "QuicksortTest.*";
	char* pGtestFilter = gtestFilter;
	int gtestRepeat = 1;

	//gTestÉèÖÃ.
	testing::FLAGS_gtest_filter = pGtestFilter;
	testing::GTEST_FLAG(output) = "xml:";
	testing::FLAGS_gtest_repeat = gtestRepeat;
	testing::InitGoogleTest(&argc, argv);

	if(-1 == RUN_ALL_TESTS())//gTestÅÜ²âÊÔÀý
	{
		printf("[::main]gtest -> RUN_ALL_TESTS() ERROR!\n\n\n");
	}
	return 0;
}
