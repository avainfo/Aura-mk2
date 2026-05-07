# Core System

The Core System is the local orchestration layer of AURA MK II.

It owns the runtime state of the interactive surface, including the logical canvas, display nodes, windows, scenes, modules, events, synchronization, and system health.

## Scope

- Display node registration
- Logical canvas management
- Window state and placement
- Scene state and transitions
- Module orchestration
- Event routing
- Display synchronization
- Runtime health monitoring

## Interfaces

Receives:

- local configuration data
- display registration messages
- display heartbeat messages
- gesture and presence events
- module action requests

Emits:

- display viewport assignments
- state snapshots
- window updates
- scene changes
- synchronization commands
- diagnostic status updates

## Architecture position

The Core System is responsible for coordination and state management.

It does not render the interface and does not access raw sensor data. Rendering is handled by the Display Runtime. Sensor processing is handled by the Perception Service. Configuration is loaded from the `config/` layer.

## Main concepts

- **Logical Canvas**: virtual surface shared across all display nodes
- **Display Registry**: registered display nodes and their assigned viewports
- **Window Manager**: position, size, visibility, and state of windows
- **Scene Manager**: predefined layouts and transitions
- **Module Manager**: enabled modules and module-level state
- **Event Router**: maps system and perception events to actions
- **Sync Engine**: distributes state updates to display runtimes

## Related documentation

Planned documentation:

- `docs/architecture.md`
- `docs/multi-screen-orchestration.md`
- `docs/protocol.md`
