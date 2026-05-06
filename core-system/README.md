# Core System

The Core System is the local brain of AURA MK II.

It manages the global state of the interactive surface: displays, logical canvas, windows, scenes, modules, gestures, synchronization, and system health.

## Responsibilities

- Register display nodes
- Maintain the global logical canvas
- Manage windows and scenes
- Load and route modules
- Receive abstract perception events
- Synchronize display runtimes
- Monitor node health and connection state

## Core rule

```text
The Core System decides.
The Display Runtime renders.
```

## Main concepts

* **Logical Canvas**: one large virtual surface shared across all displays
* **Display Registry**: list of connected display nodes and their viewports
* **Window Manager**: placement, movement, sizing, and state of windows
* **Scene Manager**: predefined layouts for specific contexts
* **Module Manager**: enabled features and module state
* **Sync Engine**: state distribution to display nodes
* **Event Router**: converts gesture and system events into actions

## First development goal

The first version should:

* load screen configuration from `config/local/screens.yaml`
* create a logical canvas
* expose a basic WebSocket server
* accept display node registration
* send a static state snapshot to connected displays

## Not responsible for

* Rendering the UI
* Reading raw camera data
* Managing cloud accounts
* Running module UI code directly

