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

unsigned long long int WarmupChallenges::Test4(int n, std::vector<unsigned long long int>& arr)
{
	unsigned long long int sum = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
      sum += arr[arr_i];
    }

    return sum;
}

int WarmupChallenges::Test5(int n, std::vector<std::vector<int>> arr)
{
	int diag_a = 0, diag_b = 0;

	for(int a_i = 0; a_i < n; a_i++){
	   for(int a_j = 0; a_j < n; a_j++){
		  if(a_i == a_j) //sum of diag_a
			diag_a += arr[a_i][a_j];
		  if((a_i+a_j+1) == n) //sum of diag_b
			diag_b += arr[a_i][a_j];
	   }
	}

	return abs(diag_b - diag_a);
}
