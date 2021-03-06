#include "stdafx.h"
#include <iostream>
#include "Sales_item.h"


int main() {
	Sales_item curReps, books;
	if (std::cin >> curReps) {
		int cnt = 1; // store the count for the currReps
		while (std::cin >> books) {
			if (books.isbn() == curReps.isbn()) // if the values are the same
				++cnt; // add 1 to cnt
			else { // otherwise, print the count for the previous value
				std::cout << curReps << " occurs "
					<< cnt << " times" << std::endl;
				curReps = books; // remember the new value
				cnt = 1; // reset the counter
			}
		} // while loop ends here
		  // remember to print the count for the last value in the file
		std::cout << curReps << " occurs "
			<< cnt << " times" << std::endl;
	} // outermost if statement ends here
	return 0;
}