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

#include "display_viewport.hpp"
#include <string>

namespace aura::core {

enum class DisplayNodeStatus { Offline, Online };

class DisplayNode {
  public:
	DisplayNode(std::string id, DisplayViewport viewport);

	const std::string &id() const noexcept;
	const DisplayViewport &viewport() const noexcept;
	DisplayNodeStatus status() const noexcept;

	void set_status(DisplayNodeStatus status) noexcept;

  private:
	std::string id_;
	DisplayViewport viewport_;
	DisplayNodeStatus status_{DisplayNodeStatus::Offline};
};

} // namespace aura::core
