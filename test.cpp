#include <cstdio>
#include "randomizer.hpp"
using namespace randomizer;

int main (void) {
	unsigned long a = 10;
	unsigned short b;
	b = randomizer::A();
	printf("%u\n", b);

	while (a != 0) {
		a--;
		b = randomizer::B(a, b);
		printf("%u\n", b);
	}

	return 0;
}
