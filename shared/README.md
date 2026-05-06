# Shared Protocol and Types

This folder contains shared schemas, message definitions, examples, and protocol conventions used by multiple AURA MK II components.

It helps keep the Core System, Display Runtime, Perception Service, modules, and tools aligned.

## Responsibilities

This folder may contain:

- JSON schemas
- protocol message definitions
- shared type definitions
- example messages
- validation rules

## Suggested structure

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

## First development goal

Define the first protocol messages:

* `register_display`
* `display_assigned`
* `heartbeat`
* `state_snapshot`
* `window_update`
* `gesture_event`

## Example message

```json
{
  "type": "register_display",
  "node_id": "display_left",
  "resolution": {
    "width": 1920,
    "height": 1080
  }
}
```

## Not responsible for

* Running services
* Rendering UI
* Managing runtime state
* Storing private user data
