#include <cstdio>
#include <ctime>

unsigned short randomizerA(void) {
	unsigned long a = 0;
	unsigned long b = 0;
	char * c = tmpnam(0);

	while (c[a] != 0) {
		b = ((b + 1) * c[a]) & 65535;
		a++;
	}

	a = (b + (time(0) & 65535)) & 65535;
	return a;
}

unsigned short randomizerB(unsigned long a, unsigned short b) {
	a = ((a & 65535) + (b << 11) + (b >> 2)) & 65535;
	return a;
}
