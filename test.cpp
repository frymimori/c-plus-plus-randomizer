#include <cstdio>
#include "randomizer.hpp"

int main (void) {
	unsigned long a = 10;
	unsigned short b;
	b = randomizerA();
	printf("%u\n", b);

	while (a != 0) {
		a--;
		b = randomizerB(a, b);
		printf("%u\n", b);
	}

	return 0;
}
