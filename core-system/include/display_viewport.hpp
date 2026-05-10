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

namespace aura::core {

class DisplayViewport {
  public:
	DisplayViewport(int x, int y, int width, int height);

	int x() const;
	int y() const;
	int width() const;
	int height() const;

	int right() const noexcept;
	int bottom() const noexcept;

	bool contains_point(int x, int y) const noexcept;
	bool contains_rect(int x, int y, int width, int height) const noexcept;
	bool intersects_rect(int x, int y, int width, int height) const noexcept;

  private:
	int x_;
	int y_;
	int width_;
	int height_;
};

} // namespace aura::core
