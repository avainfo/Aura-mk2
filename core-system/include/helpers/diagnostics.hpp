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

#pragma once

#include <exception>
#include <string_view>

namespace aura::core::diagnostics {

struct Diagnostics {
	char action;
	std::string_view context;
	std::string_view message;
};

void log_error(Diagnostics diag);
void log_exception(std::string_view context, const std::exception &exception);

} // namespace aura::core::diagnostics
