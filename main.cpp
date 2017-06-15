#include <iostream>
#include <game.hpp>

void printHelp(void);

int main(int argc, char** argv)
{
	// Cycle through command line arguments
	for (int ai = 0; ai < argc; ai++) {
		std::string a = argv[ai];
		if (a.at(0) == '-') {
			for (auto &c : a.substr(1, a.length() - 1)) {
				switch (c) {
				case 'h':
					printHelp();
					break;
				
				case 'd':
					Game::setDebugPrint();
					Game::setDebug();
					break;
				default:
					std::cout << "unknown option: \'" << c << "\'" << std::endl;
				}
			}
		}
	}
	
	return 0;
}

void printHelp(void)
{
	std::cout << "MineSweep build " << Game::Info::BuildNum() << std::endl << std::endl
			<< "    Commands: " << std::endl
			<< "	-d	Enables debug mode" << std::endl
			<< "	-h	Shows this menu" << std::endl << std::endl;

}
