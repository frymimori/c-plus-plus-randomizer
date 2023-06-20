namespace randomizer {
	unsigned long randomizer(unsigned long a) {
		return ((a + 101101) * 1010110101) + (a >> 1);
	}
}
