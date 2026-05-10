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

#include "display_viewport.hpp"
#include <stdexcept>

namespace aura::core {

DisplayViewport::DisplayViewport(int x, int y, int width, int height)
	: x_(x), y_(y), width_(width), height_(height) {
	if (width <= 0 || height <= 0) {
		throw std::invalid_argument("DisplayViewport dimensions must be positive");
	}
}

int DisplayViewport::x() const { return x_; }
int DisplayViewport::y() const { return y_; }
int DisplayViewport::width() const { return width_; }
int DisplayViewport::height() const { return height_; }

int DisplayViewport::right() const { return x_ + width_; }

int DisplayViewport::bottom() const { return y_ + height_; }

bool DisplayViewport::contains_point(int x, int y) const noexcept {
	return x >= x_ && y >= y_ && x < right() && y < bottom();
}

bool DisplayViewport::contains_rect(int x, int y, int width, int height) const noexcept {
	if (width <= 0 || height <= 0)
		return false;
	return contains_point(x, y) && contains_point(x + width - 1, y + height - 1);
}

bool DisplayViewport::intersects_rect(int x, int y, int width, int height) const noexcept {
	if (width <= 0 || height <= 0)
		return false;

	const int rect_l = x;
	const int rect_t = y;
	const int rect_r = x + width;
	const int rect_b = y + height;

	return rect_l < right()
		&& rect_r > x_
		&& rect_t < bottom()
		&& rect_b > y_;
}

} // namespace aura::core
