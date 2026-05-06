# Display Runtime

The Display Runtime is the application running on each physical display.

Each display node connects to the Core System, receives its assigned viewport, and renders only its portion of the global logical canvas.

## Responsibilities

- Connect to the Core System
- Register as a display node
- Receive assigned viewport information
- Receive canvas, windows, scenes, and module state
- Render the local viewport
- Report health, FPS, errors, and connection status

## Core rule

```text
Display nodes do not decide the global UI state.
They render what the Core System sends.
```

## Example

A global canvas can be 5760x1080.

A display runtime may receive:

```json
{
  "display_id": "display_left",
  "viewport": {
    "x": 0,
    "y": 0,
    "width": 1920,
    "height": 1080
  }
}
```

This display only renders content intersecting that viewport.

## First development goal

The first version should:

* run as a Flutter Linux app
* load or receive a viewport
* render a static canvas state
* display simple module windows as rectangles
* later connect to the Core System through WebSocket

## Not responsible for

* Detecting gestures
* Managing modules globally
* Deciding scene changes
* Owning the global canvas state
