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

#include "display_node.hpp"
#include "display_viewport.hpp"
#include <string>

namespace aura::core {

DisplayNode::DisplayNode(std::string id, DisplayViewport viewport)
	: id_(std::move(id)), viewport_(viewport) {}

const std::string &DisplayNode::id() const noexcept { return id_; }
const DisplayViewport &DisplayNode::viewport() const noexcept { return viewport_; }
DisplayNodeStatus DisplayNode::status() const noexcept { return status_; }

void DisplayNode::set_status(DisplayNodeStatus status) noexcept { status_ = status; }

} // namespace aura::core
