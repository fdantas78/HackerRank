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

