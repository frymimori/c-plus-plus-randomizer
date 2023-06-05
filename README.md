## C++ Randomizer

#### Description

Create pseudo-random and random integers using C++ with a fast and unique randomizing algorithm.

- All integral data types supported in output
- Allocates memory without dynamic memory allocation functions
- Alternative to rand() returns integers with 4-8 bytes instead of 8-12 bytes
- Alternative to srand() randomizes and seeds randomization in the same function
- Compiles with forward-compatible C++98
- Conforms to strict ISO C++ with -pedantic-errors enabled
- Derives more subsequent entropy than rand() after seeding with no degredation after millions of iterations
- Efficient alternative to rand() and srand() with ULONG_MAX output instead of SHRT_MAX
- Efficient without multithreading or processor-specific vectorization
- Escapes zeroland immediately on subsequent function calls
- Fast randomization speed without relying on compiler optimization
- Fewer instructions and operators with less memory and CPU consumption than rand()
- Generates random cryptographically-secure integers when reseeded with a random number derived from random bytes
- Memory-safe with defined behavior
- Minified and readable code with single-letter variable names
- No division or modulus operations from rand()
- Only addition, bitwise shift and multiplication operations used in a simple expression
- Parallel randomization supported with implementation-specific process IDs and /dev/random bytes
- Seeks numbers with granular randomization state in function arguments and return values
- Suitable for both slow CSRNG and fast PRNG purposes based on the frequency and randomness of seed values

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
```

The function `randomizer::randomizer()` ouputs a randomized `unsigned long` integer.

The return value `a` is an `unsigned long` defined as an integer between `0` and `ULONG_MAX`.

The first argument variable `a` is an `unsigned long` defined as either the current randomization state or the seed for randomization.

``` console
gcc -o c-plus-plus-randomizer -pedantic-errors -std=c++98 randomizer.cpp test.cpp && ./c-plus-plus-randomizer
```

The output from the command `./c-plus-plus-randomizer` is a set of timestamp-seeded pseudo-random integers with specific integral data types.

``` console
./c-plus-plus-randomizer
# 16672331205724537351
# 4668313745905881366
# 10595719534961995353
# 14295086618798993145
# 4437415150218644585
# 1785814382729887057
# 7830692703958392013
# 9039024910036510647
# 16713160888462422878
# 5559399300067795813
# 61819
# 16212
# 5006
# 44909
# 59431
# 46278
# 26017
# 10117
# 55851
# 16924
# 90
# 15
# 66
# 139
# 44
# 178
# 115
# 168
# 28
# 90
```
