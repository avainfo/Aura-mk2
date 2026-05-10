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

class LogicalCanvas {
  public:
	LogicalCanvas(int width, int height);

	int width() const;
	int height() const;

	bool contains_point(int x, int y) const;
	bool contains_rect(int x, int y, int width, int height) const;

  private:
	int width_{0};
	int height_{0};
};

} // namespace aura::core
