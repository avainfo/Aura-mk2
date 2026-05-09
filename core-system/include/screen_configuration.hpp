#pragma once
#include "yaml-cpp/node/node.h"
#include <string>
#include <vector>

namespace aura::core {

struct Canvas {
	int width{0}, height{0};
};

struct Screen {
	std::string id;
	int x{0}, y{0};
	int width{0}, height{0};
};

struct ScreenConfig {
	Canvas canvas;
	std::vector<Screen> screens;
};

} // namespace aura::core

namespace YAML {

template <> struct convert<aura::core::Screen> {
	static bool decode(const Node &node, aura::core::Screen &screen) {
		if (!node.IsMap() || !node["id"] || !node["viewport"])
			return false;
		screen.id = node["id"].as<std::string>();
		auto viewport = node["viewport"];
		screen.x = viewport["x"].as<int>();
		screen.y = viewport["y"].as<int>();
		screen.height = viewport["height"].as<int>();
		screen.width = viewport["width"].as<int>();
		return true;
	}
};

template <> struct convert<aura::core::ScreenConfig> {
	static bool decode(const Node &node, aura::core::ScreenConfig &screen_config) {
		if (!node.IsMap() || !node["screens"])
			return false;
		screen_config.screens = node["screens"].as<std::vector<aura::core::Screen>>();
		auto canvas = node["canvas"];
		screen_config.canvas.width = canvas["width"].as<int>();
		screen_config.canvas.height = canvas["height"].as<int>();
		return true;
	}
};

} // namespace YAML
