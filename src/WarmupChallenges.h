/*
 * WarmupChallenges.h
 *
 *  Created on: Mar 25, 2017
 *      Author: makaidaimyo
 */

#ifndef WARMUPCHALLENGES_H_
#define WARMUPCHALLENGES_H_

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

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
};

#endif /* WARMUPCHALLENGES_H_ */
