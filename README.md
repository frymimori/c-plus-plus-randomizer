## C++ Randomizer

#### Description
Create random integers from standard I/O and timestamps using C++ with a fast and unique randomizing algorithm.

- Allocates static memory with stack instead of heap
- Compiles with forward-compatible C++98
- Conforms to strict ISO C++ with -pedantic-errors enabled
- Derives more subsequent entropy than rand() with 2 seed integers instead of 1
- Efficient alternative to rand() with the same integer length between 0 and 65535
- Efficient without multithreading or processor-specific vectorization
- Fast randomization speed without relying on compiler optimization
- Initializes more secure randomization beyond pseudo-randomization with time() and tmpnam()
- Memory-safe with defined behavior
- Minified and readable code with single-letter variable names
- No division, modulus or multiplication calculations from rand() in seeded randomization
- No implementation-dependent noise seeding required
- No namespaces required with collision-resistant declarations and definitions
- No timestamp seeding required
- Portable without relying on process IDs or /dev/random
- Returns an unsigned 2-byte integer instead of 4-8 bytes from rand()
- Seed initialization returns a value that can be deallocated or modified
- Seeded randomization only uses addition, bitwise AND and bitwise shifting operations

#### Usage
Clone the repository in the current directory with the command `git`.

``` console
git clone https://github.com/frymimori/c-plus-plus-randomizer.git
```

Navigate to the cloned repository's root directory with the command `cd`.

``` console
cd c-plus-plus-randomizer
```

The following example uses code from the file [test.cpp](https://github.com/frymimori/c-plus-plus-randomizer/blob/main/test.cpp) to generate random integers.

``` cpp
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
```

The function `randomizerA()` initializes randomization and ouputs a random integer.

The return value `b` is an `unsigned short` defined as a random integer between `0` and `65535`.

The function `randomizerB()` uses 2 seed values to output a random integer.

The first argument variable `a` is an `unsigned long` defined as the first seed for randomization.

The value should be an index integer.

The second argument variable `b` is an `unsigned short` defined as the second seed for randomization.

The value should be a random integer.

The return value variable `b` is an `unsigned short` defined as a random integer result between `0` and `65535`.

``` console
gcc -o c-plus-plus-randomizer -pedantic-errors -std=c++98 randomizer.cpp test.cpp && ./c-plus-plus-randomizer
```

The output from the command `./c-plus-plus-randomizer` is a set of random integers between `0` and `65535`.

``` console
./c-plus-plus-randomizer
# 29282
# 11425
# 4912
# 34003
# 47418
# 65107
# 55192
# 62953
# 34172
# 352
# 88
```
