# Admin Console

The Admin Console is the configuration and management layer for AURA MK II installations.

It provides a dedicated interface for managing display layouts, scenes, modules, device status, diagnostics, and optional remote configuration.

## Scope

- Screen layout configuration
- Logical canvas setup
- Scene management
- Module enablement and settings
- Device status overview
- Diagnostics access
- Update and maintenance settings
- Optional cloud configuration

## Interfaces

Reads from:

- local configuration files
- device status reports
- module metadata
- diagnostic state
- optional remote configuration sources

Writes to:

- local configuration files
- scene definitions
- module settings
- system maintenance settings
- optional cloud-backed configuration

## Architecture position

The Admin Console is not part of the real-time rendering path.

The interactive surface must remain operational without the Admin Console running. Runtime orchestration is handled by the Core System, and rendering is handled by the Display Runtime.

## Implementation options

The Admin Console may be implemented as one or more of the following:

- local web dashboard
- mobile application
- tablet application
- desktop configuration tool

The implementation can evolve without changing the runtime architecture.

## Related documentation

Planned documentation:

- `docs/architecture.md`
- `docs/configuration.md`
- `docs/deployment.md`
