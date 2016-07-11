#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(void)
{
	std::ifstream f ("/dev/urandom", std::ios::in | std::ios::binary);
	// check device was correctly open
	if (f.is_open() == false) {
		std::cout << "ERROR opening urandom." << std::endl;
		return -1;
	}
	char rnd[4];
	f.read(rnd, sizeof(rnd));
	printf("Random number = 0x");
	for (unsigned int i = 0; i < sizeof(rnd); i++) {
		printf("%02X", (unsigned char)rnd[i]);
	}
	printf("\n");
	f.close();
	return 0;
}
