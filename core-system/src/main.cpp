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

#include <iostream>
#include <filesystem>
#include <string>
#include <yaml-cpp/node/node.h>
#include <yaml-cpp/node/parse.h>
#include <yaml-cpp/yaml.h>

using namespace std;

namespace fs = filesystem;

struct Canva {
	int width, height;
};

struct Screen {
	string id;
	int x, y;
	int width, height;
};

struct ScreensConfig {
	Canva canvas;
	vector<Screen> screens;
};

int main ([[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	fs::path config_dir = "config/local";

	for (int i = 1; i < argc; ++i) {
		const string arg = argv[i];

		if (arg == "--config-dir" && i + 1 < argc) {
			config_dir = argv[++i];
		}
	}

	cout << "Hello World" << endl;
	YAML::Node screens_config = YAML::LoadFile((config_dir / "screens.yaml").string());
	cout << screens_config["canvas"] << endl;
	return 0;
}
