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

std::string WarmupChallenges::Test6(int n, std::vector<int> arr)
{
	double iPositive = 0, iNegative = 0, iZero = 0;

	for(int i = 0; i < n; i++){
	  if(arr[i] > 0)
		  iPositive++;
	  else if(arr[i] < 0)
		  iNegative++;
	  else
		  iZero++;

	  //std::cout << i << ":" << arr[i] << ",";
	}

	//std::cout << iPositive << " " << iNegative << " " << iZero << std::endl;
	//std::printf("%8.6f\n%8.6f\n%8.6f\n",(iPositive/n),(iNegative/n),(iZero/n));
	return std::to_string(iPositive/n) + "\n" + std::to_string(iNegative/n) + "\n" + std::to_string(iZero/n);
}

std::string WarmupChallenges::Test7(int n)
{
	std::ostringstream osStair;
	for(int i = 1; i <= n; i++){
		osStair << std::setw(n) << std::string(i, '#') << std::endl;
	}

	return osStair.str();
}

std::string WarmupChallenges::Test8(int n, std::vector<long long int>& arr)
{
	std::ostringstream osResult;
	long long int iMin = 0, iMax = 0;

	//Order arry min to max
	std::sort(arr.begin(), arr.end(),std::less<long long int>());

	for(int i = 0; i < arr.size(); i++){
		if(i < n) //Sums only the first n numbers
			iMin += arr[i];
		if(i >= (arr.size() - n))  //Sums only the last n numbers
			iMax += arr[i];

		//std::cout << arr[i] << ' ' << iMin << ' ' << iMax << std::endl;
    }

	return std::to_string(iMin) + " " + std::to_string(iMax);
}
