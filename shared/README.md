# Shared Protocol and Types

This folder contains shared protocol definitions, schemas, examples, and type contracts used across AURA MK II components.

It provides a common language between the Core System, Display Runtime, Perception Service, modules, configuration tools, and development utilities.

## Scope

- Protocol message schemas
- Shared runtime types
- JSON schema definitions
- Example protocol payloads
- Validation contracts
- Cross-component data conventions

## Structure

```text
shared/
├── protocol/
│   ├── messages.schema.json
│   ├── display.schema.json
│   ├── window.schema.json
│   ├── gesture.schema.json
│   └── scene.schema.json
├── types/
│   ├── display_node.json
│   ├── logical_canvas.json
│   └── module_manifest.json
└── examples/
    ├── register_display.json
    ├── state_snapshot.json
    └── gesture_event.json
```

## Architecture position

Shared definitions are used to keep component boundaries explicit and consistent.

The Core System, Display Runtime, Perception Service, Admin Console, and developer tools should rely on these contracts when exchanging data or validating configuration.

This folder should contain contracts and examples, not runtime business logic.

## Initial protocol surface

Planned protocol messages include:

* `register_display`
* `display_assigned`
* `heartbeat`
* `state_snapshot`
* `window_update`
* `scene_change`
* `gesture_event`
* `presence_event`
* `diagnostic_status`

## Related documentation

Planned documentation:

* `docs/protocol.md`
* `docs/configuration.md`
* `docs/architecture.md`

