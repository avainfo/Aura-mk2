#pragma once
#include <string>
#include <vector>

namespace aura::core {

struct Canva {
	int width, height;
};

struct Screen {
	std::string id;
	int x, y;
	int width, height;
};

struct ScreenConfig {
	Canva canvas;
	std::vector<Screen> screens;
};

}

