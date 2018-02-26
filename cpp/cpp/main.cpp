#include "stdafx.h"
#include <iostream>

#include "Ch2\1.h"


int main() {
	bool a[2] = { 1, 0 };
	bool b[2] = { 1, 1 };
	auto c = addBin(a, b, 2);
	for (auto i = 0; i < 3; i++) {
		std::cout << c[i];
	}
    return 0;
}

