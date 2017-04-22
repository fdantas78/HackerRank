/*
 * WarmupChallenges.h
 *
 *  Created on: Mar 25, 2017
 *      Author: makaidaimyo
 */

#ifndef WARMUPCHALLENGES_H_
#define WARMUPCHALLENGES_H_

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

class WarmupChallenges {
public:
	WarmupChallenges();
	virtual ~WarmupChallenges();
	
	void Print_Separator(void) {std::cout << "-------------------" << std::endl;}

	int Test1(int a, int b);
	int Test2(int n, std::vector<int>& arr);
	std::string Test3(std::vector<int>& arr_a, std::vector<int>& arr_b);
	unsigned long long int Test4(int n, std::vector<unsigned long long int>& arr);
	int Test5(int n, std::vector<std::vector<int>> arr);
	std::string Test6(int n, std::vector<int> arr);
	std::string Test7(int n);
	std::string Test8(unsigned int n, std::vector<long long int>& arr);
	std::string Test9(std::string sInput);
	std::string Test10(unsigned long int n, std::vector<unsigned long int> arr);
};

#endif /* WARMUPCHALLENGES_H_ */
