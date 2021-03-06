// https://www.geeksforgeeks.org/stdunique-in-cpp/

// This question is just implementing std::unique
// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

/*

std::unique is used to remove duplicates of any element present consecutively in a range[first, last). It performs this task for all the sub-groups present in the range having the same element present consecutively.

    It does not delete all the duplicate elements, but it removes duplicacy by just replacing those elements by the next element present in the sequence which is not duplicate to the current element being replaced. All the elements which are replaced are left in an unspecified state.

    Another interesting feature of this function is that it does not changes the size of the container after deleting the elements, it just returns a pointer pointing to the new end of the container, and based upon that we have to resize the container, or remove the garbage elements.

*/


// C++ program to demonstrate the use of std::unique
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v = { 1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 }, i;

	vector<int>::iterator ip;

	// Using std::unique
	ip = std::unique(v.begin(), v.begin() + 12);
	// Now v becomes {1 3 10 1 3 7 8 * * * * *}
	// * means undefined

	// Resizing the vector so as to remove the undefined terms
	v.resize(std::distance(v.begin(), ip));

	// Displaying the vector after applying std::unique
	for (ip = v.begin(); ip != v.end(); ++ip) {
		cout << *ip << " ";
	}

	return 0;
}
