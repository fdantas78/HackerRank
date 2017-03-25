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

	std::cout << "Warmup Challenges" << std::endl << std::endl;

	{
		std::cout << "Solve Me First" << std::endl << "-------------------" << std::endl;

		//Initialization
		int a = 3, b = 4;

		//Solution
		std::cout << WarmupChallenges::Test1(a,b) << std::endl;
		std::cout << "-------------------" << std::endl;
	}

	{
		std::cout << "Simple Array Sum" << std::endl << "-------------------" << std::endl;

		//Initialization
		int n = 6;
		std::vector<int> arr = {1, 2, 3, 4, 10, 11};

		//Solution
		std::cout << WarmupChallenges::Test2(n,arr) << std::endl;
		std::cout << "-------------------" << std::endl;
	}

	{
		std::cout << "Compare the Triplets" << std::endl << "-------------------" << std::endl;
		//Initialization
		std::vector<int> arr_a = {5, 6, 7};
		std::vector<int> arr_b = {3, 6, 10};

		//Solution
		std::cout << WarmupChallenges::Test3(arr_a,arr_b) << std::endl;
		std::cout << "-------------------" << std::endl;
	}

	{
		std::cout << "Solve Me First" << std::endl << "-------------------" << std::endl;
		//Initialization
		//Solution
		//std::cout << WarmupChallenges::Test4() << std::endl;
		std::cout << "-------------------" << std::endl;

	}


	{
		std::cout << "" << std::endl << "-------------------" << std::endl;
		//Initialization
		//Solution
		//std::cout << WarmupChallenges::Test5() << std::endl;
		std::cout << "-------------------" << std::endl;
	}

	return 0;
}
