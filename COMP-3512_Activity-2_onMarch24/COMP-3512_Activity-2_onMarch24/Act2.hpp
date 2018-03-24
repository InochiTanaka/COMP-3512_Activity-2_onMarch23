#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename Container>
int getMax(const Container& c)
{
	int max = c[0];

	for (auto x : c)
	{
		if (x > max) {
			max = x;
		}
	}
	return max;
}



