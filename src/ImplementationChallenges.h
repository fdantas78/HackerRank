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
};

#endif /* IMPLEMENTATIONCHALLENGES_H_ */
