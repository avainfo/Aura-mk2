# Developer Tools

This folder contains development utilities used to inspect, validate, simulate, and debug AURA MK II during implementation.

These tools support development and testing workflows. They are not part of the production runtime.

## Scope

- Layout preview utilities
- Protocol validation tools
- Display node simulation
- Gesture event simulation
- Configuration inspection
- Canvas and window debugging

## Structure

```text
tools/
├── layout-preview/
│   └── preview_layout.py
├── protocol-validator/
│   └── validate_message.py
└── dev-simulator/
    └── simulate_display_nodes.py
```

## Architecture position

Developer tools operate outside the runtime system.

They can interact with configuration files, shared protocol definitions, and local services, but they should not contain production orchestration, rendering, or perception logic.

## Related documentation

Planned documentation:

- `docs/configuration.md`
- `docs/protocol.md`
- `docs/multi-screen-orchestration.md`

