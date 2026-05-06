# Developer Tools

This folder contains development tools used to test, validate, simulate, or debug AURA MK II.

These tools are not part of the final product runtime.

## Possible tools

```text
tools/
├── layout-preview/
│   └── preview_layout.py
├── protocol-validator/
│   └── validate_message.py
└── dev-simulator/
    └── simulate_display_nodes.py
```

## Responsibilities

Tools may be used to:

* preview screen layouts
* validate protocol messages
* simulate display nodes
* simulate gesture events
* inspect configuration files
* debug canvas and window placement

## First development goal

The first useful tool should be a display node simulator.

It should help test the Core System without real hardware.

Example goal:

```text
Start Core System.
Start three simulated display nodes.
Verify that each node receives the correct viewport.
```

## Not responsible for

* Production runtime behavior
* Main UI rendering
* Real sensor processing
* Cloud configuration

