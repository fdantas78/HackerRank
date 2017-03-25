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
	
	static int Test1(int a, int b);
        static int Test2(int n, std::vector<int>& arr);
        static std::string Test3(std::vector<int>& arr_a, std::vector<int>& arr_b);
        static void Test4(void);
        static void Test5(void);
};

#endif /* WARMUPCHALLENGES_H_ */
