#pragma once
#include <string>
#include <vector>

namespace aura::core {

struct Canva {
	int width{0}, height{0};
};

struct Screen {
	std::string id;
	int x{0}, y{0};
	int width{0}, height{0};
};

struct ScreenConfig {
	Canva canvas;
	std::vector<Screen> screens;
};

}

