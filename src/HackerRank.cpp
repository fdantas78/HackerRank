//============================================================================
// Name        : HackerRank.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "WarmupChallenges.h"
#include "ImplementationChallenges.h"

void Show_WarmupChallenges()
{
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
		unsigned int n = 6;
		std::vector<long long int> arr = {1, 2256, 5, 4, 3, 88556, 7, 8};

		//Solution
		std::cout << pWarmupChallenges->Test8(n,arr) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	{
		std::cout << "Time Conversion" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		std::string sInput= "12:05:45AM";

		//Solution
		std::cout << pWarmupChallenges->Test9(sInput) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	{
		std::cout << "Birthday Cake Candles" << std::endl;
		pWarmupChallenges->Print_Separator();

		//Initialization
		unsigned long int n = 10;
		std::vector<unsigned long int> arr = {10,18, 90, 90, 13, 90, 75, 90, 8, 90, 43};

		//Solution
		std::cout << pWarmupChallenges->Test10(n, arr) << std::endl;
		pWarmupChallenges->Print_Separator();
	}

	std::cout << "End of Warmup Challenges" << std::endl << std::endl;
}
void Show_ImplementationChallenges()
{
	ImplementationChallenges* pImplementationChallenges = new ImplementationChallenges();
	std::cout << "Implementation Challenges" << std::endl << std::endl;

	{
		std::cout << "Grading Students" << std::endl;
		pImplementationChallenges->Print_Separator();

		//Initialization
		//int n = 4;
		std::vector<int> arr = {73, 67, 38, 33};

		//Solution
		std::cout << pImplementationChallenges->Test1(arr);
		pImplementationChallenges->Print_Separator();
	}

	{
		std::cout << "Apple and Orange" << std::endl;
		pImplementationChallenges->Print_Separator();

		//Initialization

		unsigned int s = 7, t = 11, a = 5, b = 15;
		//m = 3, n = 2;
		std::vector<long int> arr_m = {-2, 2, 1, 3, 4, 5};
		std::vector<long int> arr_n = {5, -6, -7, -8};

		//Solution
		std::cout << pImplementationChallenges->Test2(s,t,a,arr_m); //apples
		std::cout << pImplementationChallenges->Test2(s,t,b,arr_n); //oranges
		pImplementationChallenges->Print_Separator();
	}

	{
		std::cout << "Kangaroo" << std::endl;
		pImplementationChallenges->Print_Separator();

		//Initialization

		int x1 = 0, v1 = 2, x2 = 5, v2 = 3;

		//Solution
		std::cout << pImplementationChallenges->Test3(x1,v1,x2,v2);
		pImplementationChallenges->Print_Separator();
	}

	{
			std::cout << "Between Two Sets" << std::endl;
			pImplementationChallenges->Print_Separator();

			//Initialization
			std::vector<int> arr1 = {2,4};
			std::vector<int> arr2 = {16,32,96};

			//Solution
			std::cout << pImplementationChallenges->Test4(arr1,arr2);
			pImplementationChallenges->Print_Separator();
		}

	std::cout << "End of Implementation Challenges" << std::endl << std::endl;
}

int main() {

	//Show_WarmupChallenges();
	Show_ImplementationChallenges();

	return 0;
}
