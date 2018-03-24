#include "Act2.hpp"

int main() 
{
	std::vector<int> vector = {0, 1, 2, 5, 3, 4};
	
	cout << "Input data is : ";
	for (auto x : vector)
		cout << x << " ";

	cout << "\n";
	
	cout << "Max Value is : " << getMax(vector) << "\n";

	system("pause");
}