/*
 * ImplementationChallenges.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: makaidaimyo
 */

#include "ImplementationChallenges.h"

ImplementationChallenges::ImplementationChallenges() {

}

ImplementationChallenges::~ImplementationChallenges() {

}

std::string ImplementationChallenges::Test1(std::vector<int> arr)
{
	std::ostringstream osResult;
	int iUpgrade = 0;

	for(unsigned int i = 0; i < arr.size(); i++){
	  if(arr[i]%5 >= 3) //up to the next multiple of 5
	  {
		  iUpgrade = arr[i] + (5 - arr[i]%5);

		  if(iUpgrade >= 40)
			  arr[i] = iUpgrade;
	  }
	  osResult << arr[i] << std::endl;
	}

	return osResult.str();
}

std::string ImplementationChallenges::Test2(unsigned int house_x1, unsigned int house_x2, unsigned int tree_x, std::vector<long int> drops)
{
	std::ostringstream osResult;
	unsigned long int iCount = 0;

	//Validates placement
	for(unsigned int i = 0; i < drops.size(); i++)
	{
		if((drops[i]+tree_x) >= house_x1 && (drops[i]+tree_x) <= house_x2) //Drops inside house range
			iCount++;
	}

	osResult << iCount << std::endl;

	return osResult.str();
}

std::string ImplementationChallenges::Test3(int x1, int v1, int x2, int v2)
{
	std::ostringstream osResult;
	int iDistance = std::abs(x2-x1); //Initial distance

	do {
		if(x1 == x2)
		{
			osResult << "YES" << std::endl;
			break;
		}
		x1 += v1;
		x2 += v2;
	} while(std::abs(x2-x1) < iDistance);

	if(x1 != x2)
		osResult << "NO" << std::endl;

	return osResult.str();
}
