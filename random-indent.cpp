#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>

int getFileSize( char** filePath )
{

}

int readFile( std::string filePath, std::string* fileBuffer )
{
	std::ifstream inputFile( filePath.c_str() );
	inputFile.seekg( 0, std::ios::end );
	size_t fileSize = inputFile.tellg();
	std::string fileBuffer( fileSize, ' ' );
	inputFile.seekg( 0 );
	inputFile.read( &fileBuffer[0], fileSize );
	return 0;
}

int main( int argc, const char** argv )
{
	//std::cout << buffer << "\n\r";
	return 0;
}
