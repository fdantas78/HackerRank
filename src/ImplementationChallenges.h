/*
 * ImplementationChallenges.h
 *
 *  Created on: Apr 20, 2017
 *      Author: makaidaimyo
 */

#ifndef IMPLEMENTATIONCHALLENGES_H_
#define IMPLEMENTATIONCHALLENGES_H_

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

class ImplementationChallenges {
public:
	ImplementationChallenges();
	virtual ~ImplementationChallenges();

	void Print_Separator(void) {std::cout << "-------------------" << std::endl;}

	std::string Test1(std::vector<int> arr);
	std::string Test2(unsigned int house_x1, unsigned int house_x2, unsigned int tree_x, std::vector<long int> drops);
	std::string Test3(int x1, int v1, int x2, int v2);
	std::string Test4(std::vector<int> arr1, std::vector<int> arr2);
	std::string Test5(std::vector<int> arr1);
	std::string Test6(std::vector<int> arr, int d, int m);
};

#endif /* IMPLEMENTATIONCHALLENGES_H_ */
