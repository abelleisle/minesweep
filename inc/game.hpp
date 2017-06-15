#ifndef GAME_HPP
#define GAME_HPP

namespace Game
{
	bool setDebug(bool state = true);
	bool setDebugPrint(bool state = true);

	namespace Info {
		std::string BuildNum();
	}
}

#endif //GAME_HPP
