#include <cstdio>
#include <ctime>
#include "randomizer.hpp"
using namespace randomizer;

int main(void) {
	unsigned long a = randomizer::randomizer(time(0));
	unsigned char b = 10;

	while (b != 0) {
		a = randomizer::randomizer(a);
		b--;
		printf("%lu\n", a);
	}

	b = 10;

	while (b != 0) {
		a = randomizer::randomizer(a);
		b--;
		printf("%u\n", a & 65535);
	}

	b = 10;

	while (b != 0) {
		a = randomizer::randomizer(a);
		b--;
		printf("%u\n", a & 255);
	}

	return 0;
}
