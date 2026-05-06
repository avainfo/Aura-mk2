# Modules

Modules are self-contained features that can be enabled, disabled, configured, and displayed as windows on the AURA MK II surface.

Examples include recipe, timer, weather, calendar, smart-home, media, and diagnostics.

## Responsibilities

Each module should define:

- metadata
- default window size
- handled events
- emitted events
- permissions
- configuration schema
- display view

## Module philosophy

Modules should provide functionality without modifying the Core System.

The Core System manages modules.
The Display Runtime renders module views.

## Example module manifest

```json
{
  "id": "timer",
  "name": "Timer",
  "version": "0.1.0",
  "description": "A kitchen timer module for AURA MK II.",
  "permissions": [
    "display.window.create",
    "display.window.update",
    "events.gesture.receive"
  ],
  "default_window": {
    "width": 480,
    "height": 280,
    "can_move": true,
    "can_resize": false,
    "can_span_screens": false
  }
}
```

## First development goal

Start with static built-in modules:

* timer
* recipe
* weather
* diagnostics

Do not build a complex plugin system yet.

The first goal is to prove that modules can be enabled, disabled, positioned, and rendered from configuration.

## Not responsible for

* Managing the global canvas
* Owning display synchronization
* Accessing raw sensor data
* Replacing the Core System

