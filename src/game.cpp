#include <iostream>
#include <game.hpp>

namespace Game
{
	bool DEBUG = false;
	bool DEBUG_PRINT = false;

	bool setDebug(bool state) {
		DEBUG = state;
		std::cout << "Debug " << (DEBUG ? "enabled!" : "disabled!") << std::endl;
		
		return DEBUG;
	}

	bool setDebugPrint(bool state) {
		DEBUG_PRINT = state;
		std::cout << "Debug print " << (DEBUG_PRINT ? "enabled!" : "disabled!") << std::endl;
		
		return DEBUG_PRINT;
	}
	
	namespace Info {
		std::string BuildNum() {
			return("low");
		}
	}
}
