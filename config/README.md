# Configuration

This folder contains configuration files used to describe local AURA MK II installations.

Configuration defines how the system is assembled: screen layout, logical canvas, enabled modules, scenes, runtime behavior, and optional integration settings.

## Scope

- Local installation configuration
- Logical canvas dimensions
- Display node layout
- Enabled and disabled modules
- Scene definitions
- Logging settings
- Security settings
- Update settings
- Optional cloud integration settings

## Structure

```text
config/
├── local/
│   ├── aura.local.yaml
│   ├── screens.yaml
│   ├── modules.yaml
│   └── scenes.yaml
├── firebase/
│   ├── firebase.example.json
│   └── firestore.rules.example
└── system/
    ├── logging.yaml
    ├── security.yaml
    └── updates.yaml
```

## Configuration layers

### `local/`

Installation-specific configuration for local development and runtime setup.

This includes screen layout, scene definitions, enabled modules, and local behavior.

### `firebase/`

Optional Firebase-related configuration examples.

Cloud configuration must remain optional. The interactive surface should continue to operate without internet access.

### `system/`

System-level configuration for logging, security, updates, and runtime behavior.

## Architecture position

Configuration describes the installation. It should not contain application logic.

The Core System loads configuration and applies it to the runtime state. Display Runtime, Perception Service, modules, and tools should consume configuration through defined interfaces instead of duplicating parsing logic.

## Related documentation

Planned documentation:

- `docs/configuration.md`
- `docs/architecture.md`
- `docs/deployment.md`

