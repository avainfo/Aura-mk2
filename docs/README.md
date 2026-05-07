# Documentation

This folder contains the technical documentation for AURA MK II.

The root `README.md` provides the project overview. Detailed architecture, runtime behavior, configuration, protocol, deployment, and design decisions are documented here.

## Documentation index

```text
docs/
├── architecture.md
├── multi-screen-orchestration.md
├── module-system.md
├── protocol.md
├── configuration.md
├── gesture-navigation.md
├── privacy-model.md
├── deployment.md
└── roadmap.md
```

## Documents

### `architecture.md`

Global architecture, component responsibilities, runtime layers, and system boundaries.

### `multi-screen-orchestration.md`

Logical canvas model, physical display mapping, viewport assignment, synchronization, and window behavior across multiple screens.

### `module-system.md`

Module contract, metadata, configuration, lifecycle, permissions, events, and rendering integration.

### `protocol.md`

Message formats exchanged between Core System, Display Runtime, Perception Service, modules, and tools.

### `configuration.md`

Local configuration structure, YAML and JSON examples, screen layout, modules, scenes, and optional integration settings.

### `gesture-navigation.md`

Gesture vocabulary, active zones, intent mapping, confidence handling, and interaction rules.

### `privacy-model.md`

Local perception model, raw sensor isolation, event-only data flow, and privacy-oriented design constraints.

### `deployment.md`

Linux services, startup order, systemd units, logging, watchdog behavior, update flow, and runtime maintenance.

### `roadmap.md`

Prototype milestones, implementation phases, MVP boundaries, and planned evolution.

## Documentation approach

The root README should stay concise and product-oriented.

Detailed technical explanations belong in this folder.

