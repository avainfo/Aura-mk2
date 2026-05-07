# Display Runtime

The Display Runtime is the rendering layer of AURA MK II.

It runs on each physical display node and renders the portion of the global logical canvas assigned by the Core System.

## Scope

- Display node startup
- Core System connection
- Display registration
- Viewport assignment handling
- Local canvas viewport rendering
- Module window rendering
- Runtime status reporting
- Reconnection handling

## Interfaces

Receives:

- viewport assignments
- state snapshots
- window updates
- scene changes
- module rendering data
- synchronization commands

Emits:

- display registration messages
- heartbeat messages
- runtime status updates
- rendering diagnostics
- connection error reports

## Architecture position

The Display Runtime is part of the real-time visual path.

It does not own the global interface state and does not decide scene transitions, window placement, or module orchestration. These decisions are handled by the Core System.

Each Display Runtime instance renders only the content intersecting its assigned viewport.

## Rendering model

The global surface is represented as a logical canvas.

Each display node receives a viewport describing which part of that canvas it owns. The runtime clips the global scene to that viewport and renders the visible windows locally.

## Related documentation

Planned documentation:

- `docs/architecture.md`
- `docs/multi-screen-orchestration.md`
- `docs/protocol.md`
