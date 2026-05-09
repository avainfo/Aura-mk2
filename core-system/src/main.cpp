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
#include <exception>
#include <filesystem>
#include <iostream>
#include <span>
#include <string>
#include <string_view>
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

void parse_arguments(span<char *> args, fs::path *config_dir) {
	for (size_t i = 1; i < args.size(); ++i) {
		string_view arg = args[i];

		if (arg == "--config-dir" && (i + 1) < args.size())
			*config_dir = args[++i];
	}
}

ScreenConfig configure_screens(fs::path config_dir) {
	string path = (config_dir / "screens.yaml").string();
	YAML::Node config_node = YAML::LoadFile(path);
	return config_node.as<ScreenConfig>();
}

int main(int argc, char *argv[]) {
	span<char *> args(argv, argc);

	fs::path config_dir = "config/local";
	parse_arguments(args, &config_dir);

	try {
		ScreenConfig screens_config = configure_screens(config_dir);
		print_screen_config(screens_config);
	} catch (const exception &e) {
		cerr << "Failed to load screen configuration: " << e.what() << "\n";
	}
	return 0;
}
