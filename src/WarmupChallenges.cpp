/*
 * WarmupChallenges.cpp
 *
 *  Created on: Mar 25, 2017
 *      Author: makaidaimyo
 */

#include "WarmupChallenges.h"

WarmupChallenges::WarmupChallenges() {
	// TODO Auto-generated constructor stub

}

WarmupChallenges::~WarmupChallenges() {
	// TODO Auto-generated destructor stub
}

int WarmupChallenges::Test1(int a, int b)
{
    return a+b;
}

int WarmupChallenges::Test2(int n, std::vector<int>& arr)
{
    int sum = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
      sum += arr[arr_i];
    }

    return sum;
}

std::string WarmupChallenges::Test3(std::vector<int>& arr_a, std::vector<int>& arr_b)
{
    int a_points = 0, b_points = 0;

    for(unsigned int arr_i = 0;arr_i < arr_a.size();arr_i++){
       if((arr_a[arr_i]-arr_b[arr_i]) > 0) //a win
           a_points++;
       else if((arr_b[arr_i]-arr_a[arr_i]) > 0) //b win
           b_points++;
    }

    return std::to_string(a_points) + " " + std::to_string(b_points);
}

void WarmupChallenges::Test4(void)
{

}

void WarmupChallenges::Test5(void)
{
    std::cout << "" << std::endl << "-------------------" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "-------------------" << std::endl;
}
