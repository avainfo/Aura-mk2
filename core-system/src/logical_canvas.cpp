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

namespace aura::core {

LogicalCanva::LogicalCanva(int width, int height) : width_(width), height_(height) {}

int LogicalCanva::width() const { return width_; }

int LogicalCanva::height() const { return height_; }

bool LogicalCanva::contains_point(int x, int y) const { return x >= 0 && y >= 0 && x < width_ && y < height_; }

bool LogicalCanva::contains_rect(int x, int y, int width, int height) const {
	if (width <= 0 || height <= 0)
		return false;

	return contains_point(x, y) && contains_point(x + width - 1, y + height - 1);
}

} // namespace aura::core
