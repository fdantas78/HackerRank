//============================================================================
// Name        : HackerRank.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "WarmupChallenges.h"

int main() {

	WarmupChallenges* pWarmupChallenges = new WarmupChallenges();
	std::cout << "Warmup Challenges" << std::endl << std::endl;

	{
		std::cout << "Solve Me First" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		int a = 3, b = 4;

		//Solution
		std::cout << pWarmupChallenges->Test1(a,b) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	{
		std::cout << "Simple Array Sum" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		int n = 6;
		std::vector<int> arr = {1, 2, 3, 4, 10, 11};

		//Solution
		std::cout << pWarmupChallenges->Test2(n,arr) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	{
		std::cout << "Compare the Triplets" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		std::vector<int> arr_a = {5, 6, 7};
		std::vector<int> arr_b = {3, 6, 10};

		//Solution
		std::cout << pWarmupChallenges->Test3(arr_a,arr_b) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	{
		std::cout << "A Very Big Sum" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		int n = 5;
		std::vector<unsigned long long int> arr = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};

		//Solution
		std::cout << pWarmupChallenges->Test4(n, arr) << std::endl;
		pWarmupChallenges->Print_Separator();

	}


	{
		std::cout << "Diagonal Difference" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		int n = 3;
		std::vector<std::vector<int>> arr = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}};

		//Solution
		std::cout << pWarmupChallenges->Test5(n, arr) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	{
		std::cout << "Plus Minus" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		int n = 6;
		std::vector<int> arr = {-4,3,-9,0,4,1};

		//Solution
		std::cout << pWarmupChallenges->Test6(n, arr) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	{
		std::cout << "Staircase" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		int n = 6;

		//Solution
		std::cout << pWarmupChallenges->Test7(n) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	{
		std::cout << "Mini-Max Sum" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		int n = 6;
		std::vector<long long int> arr = {1, 2256, 5, 4, 3, 88556, 7, 8};

		//Solution
		std::cout << pWarmupChallenges->Test8(n,arr) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	return 0;
}
