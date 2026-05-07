# Modules

Modules are self-contained feature units that extend the AURA MK II surface without changing the Core System.

They define functional capabilities such as recipes, timers, weather, smart-home controls, media, diagnostics, or other context-specific features.

## Scope

- Module metadata
- Module configuration schema
- Default window definitions
- Supported events
- Emitted actions
- Permission requirements
- Display view references

## Interfaces

Read by:

- Core System for module discovery, enablement, state, and routing
- Display Runtime for rendering module views
- Admin Console for configuration and module management

May define:

- default layout behavior
- handled gesture or system events
- module-specific settings
- runtime state requirements
- emitted actions or notifications

## Architecture position

Modules provide functionality. They do not own global orchestration.

The Core System manages module lifecycle, routing, and state coordination. The Display Runtime renders module views according to the active scene and assigned viewport.

## Initial module set

Planned built-in modules:

- `recipe`
- `timer`
- `weather`
- `diagnostics`

Additional modules can be added once the module contract is stable.

## Related documentation

Planned documentation:

- `docs/module-system.md`
- `docs/configuration.md`
- `docs/protocol.md`

