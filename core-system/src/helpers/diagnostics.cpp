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

#include "helpers/diagnostics.hpp"
#include <iostream>
#include <string_view>

/**
 * Diags :
 *   Actions :
 *     - l : loading
 *   Contexts :
 *     - scr : Screens Configuration
 *     - scn : Scenes Configuration
 *     - mdl : Modules Configuration
 */

namespace aura::core::diagnostics {

void log_error(Diagnostics diag) {
	std::string a = "";
	switch (diag.action) {
		case 'l':
			a = "Failed to load";
			break;
	}
	std::cerr << "[ERROR]"
		<< " " << a
		<< (diag.context.empty() ? "" : " {")
		<< diag.context
		<< (diag.context.empty() ? "" : "}: ")
		<< diag.message
		<< '\n';
}

void log_exception(std::string_view context, const std::exception &exception) {
	std::cerr << "[ERROR] " << context << ": " << exception.what() << '\n';
}

} // namespace aura::core::diagnostics
