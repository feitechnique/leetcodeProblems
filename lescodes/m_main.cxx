/*
 * An example of range-based loop
 */

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> v = {0, 1, 2, 3, 4, 5};
    string m_str = "u r so handsome";
	
	for (auto i : m_str)
        std::cout << i << ' ';

    std::cout << '\n';

	return 0;

}

