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

#include "logical_canvas.hpp"
#include "helpers/diagnostics.hpp"
#include "screen_configuration.hpp"
#include <cstdio>
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
using namespace aura::core::diagnostics;

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

bool verify_config_canvas(ScreenConfig &config) {
	int maxWidth{0}, maxHeight{0};

	for (Screen screen : config.screens) {
		maxWidth = max(maxWidth, screen.x + screen.width);
		maxHeight = max(maxHeight, screen.y + screen.height);
	}
	LogicalCanvas canvas(maxWidth, maxHeight);
	printf("Canvas Size: %ix%i\n", canvas.width(), canvas.height());
	return canvas.width() == config.canvas.width && canvas.height() == config.canvas.height;
}

ScreenConfig configure_screens(fs::path config_dir) {
	string path = (config_dir / "screens.yaml").string();
	YAML::Node config_node = YAML::LoadFile(path);
	ScreenConfig config = config_node.as<ScreenConfig>();

	if (!verify_config_canvas(config)) {
		Diagnostics diag('l', "Screen Configuration", "Canvas size mismatch: configured differs from computed extents");
		log_error(diag);
	}

	return config;
}

int main(int argc, char *argv[]) {
	span<char *> args(argv, argc);

	fs::path config_dir = "config/local";
	parse_arguments(args, &config_dir);

	try {
		ScreenConfig screens_config = configure_screens(config_dir);
		print_screen_config(screens_config);
	} catch (const exception &e) {
		diagnostics::log_exception("Failed to load screen configuration: ", e);
		return 1;
	}
	return 0;
}
