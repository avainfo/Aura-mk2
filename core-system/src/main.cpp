/*
 * Ava Info Conseils
 *
 * Author: Antonin Do Souto
 * Contact: antonindosouto@gmail.com
 *
 * Proprietary / Commercial License
 *
 * Copyright (c) 2026 Antonin Do Souto
 *
 * All rights reserved.
 *
 * This repository contains proprietary software and documentation.
 * Unless explicitly stated otherwise in a subdirectory LICENSE file,
 * all files in this repository are proprietary and may not be copied,
 * modified, distributed, or used without prior written permission.
 */

#include "screen_configuration.hpp"
#include <cstddef>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>
#include <yaml-cpp/node/node.h>
#include <yaml-cpp/node/parse.h>
#include <yaml-cpp/yaml.h>

using namespace std;
using namespace aura::core;

namespace fs = filesystem;

void print_screen_config(ScreenConfig config) {
	for (auto s : config.screens) {
		cout << "Screen[" << s.id << "]: " << endl;
		cout << "    Position: (" << s.x << ", " << s.y << ")" << endl;
		cout << "    Size: " << s.width << "x" << s.height << endl;
	}
}

void parse_arguments(vector<string> argv, fs::path *config_dir) {
	for (int i = 1; (size_t)i < argv.size(); ++i) {
		const string arg = argv[i];

		if (arg == "--config-dir" && (size_t)(i + 1) < argv.size()) {
			*config_dir = argv[++i];
		}
	}
}

ScreenConfig configure_screens(fs::path config_dir) {
	YAML::Node screens_config =
		YAML::LoadFile((config_dir / "screens.yaml").string());
	ScreenConfig screen_config;
	vector<Screen> screens;
	for (YAML::Node s : screens_config["screens"]) {
		Screen screen;
		screen.id = s["id"].as<string>();
		screen.x = s["viewport"]["x"].as<int>();
		screen.y = s["viewport"]["y"].as<int>();
		screen.width = s["viewport"]["width"].as<int>();
		screen.height = s["viewport"]["height"].as<int>();
		screens.push_back(screen);
	}
	screen_config.screens = screens;
	return screen_config;
}

int main([[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	fs::path config_dir = "config/local";

	parse_arguments(vector<string>(argv, argv + argc), &config_dir);
	ScreenConfig screens_config = configure_screens(config_dir);

	print_screen_config(screens_config);
	return 0;
}
