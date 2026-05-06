# Configuration

This folder contains local and optional remote configuration files for AURA MK II.

The system should remain local-first. Cloud configuration may exist later, but the main surface must work without internet access.

## Responsibilities

Configuration files define:

- canvas size
- screen positions
- enabled modules
- scenes
- logging behavior
- security options
- update settings
- optional cloud settings

## Suggested structure

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

## First development goal

Start with:

```text
config/local/screens.yaml
config/local/modules.yaml
config/local/scenes.yaml
```

These files should be enough to describe a static multi-display prototype.

## Example screen layout

```yaml
canvas:
  width: 5760
  height: 1080

screens:
  - id: display_left
    viewport:
      x: 0
      y: 0
      width: 1920
      height: 1080

  - id: display_center
    viewport:
      x: 1920
      y: 0
      width: 1920
      height: 1080

  - id: display_right
    viewport:
      x: 3840
      y: 0
      width: 1920
      height: 1080
```

## Not responsible for

* Application code
* UI rendering
* Sensor processing
* Runtime state persistence

