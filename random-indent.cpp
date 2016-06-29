#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>

int main(int argc, const char** argv) {
	std::ifstream t("Makefile");
	t.seekg(0, std::ios::end);
	size_t size = t.tellg();
	std::string buffer(size, ' ');
	t.seekg(0);
	t.read(&buffer[0], size);
	std::cout << buffer << "\n\r";
	return 0;
}
