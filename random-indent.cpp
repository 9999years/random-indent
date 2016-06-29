#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>

int main(int argc, const char** argv) {
	std::ifstream infile("Makefile");
	infile.seekg(0, std::ios::end);
	size_t size = infile.tellg();
	std::string buffer(size, ' ');
	infile.seekg(0);
	infile.read(&buffer[0], size);
	std::cout << buffer << "\n\r";
	return 0;
}
