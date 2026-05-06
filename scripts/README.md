# Scripts

This folder contains helper scripts for development, setup, testing, and local execution.

Scripts should be simple, explicit, and safe to run on a development machine.

## Possible scripts

```text
scripts/
├── start_dev_stack.sh
├── stop_dev_stack.sh
├── install_services.sh
├── format_all.sh
└── clean_build.sh
```

## Responsibilities

Scripts may be used to:

* start the local development stack
* stop running services
* install systemd service files
* format code
* clean build artifacts
* run local checks

## First development goal

Create a development script that starts:

* the Core System
* one or more Display Runtime instances
* optional simulated gesture events

Example:

```bash
./scripts/start_dev_stack.sh
```

## Rules

* Scripts should be readable.
* Scripts should fail clearly.
* Scripts should not silently modify system files.
* Production installation scripts should ask for explicit confirmation before using `sudo`.

## Not responsible for

* Business logic
* Runtime orchestration logic
* UI rendering
* Protocol definitions

