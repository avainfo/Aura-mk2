# Scripts

This folder contains helper scripts for local development, setup, testing, formatting, and service management.

Scripts should remain explicit, readable, and safe to run from a development environment.

## Scope

- Start and stop local development services
- Run local checks
- Format project files
- Clean generated build artifacts
- Install or update service files
- Support repeatable development workflows

## Structure

```text
scripts/
├── start_dev_stack.sh
├── stop_dev_stack.sh
├── install_services.sh
├── format_all.sh
└── clean_build.sh
```

## Safety principles

* Scripts should fail clearly.
* Scripts should avoid hidden side effects.
* Scripts should not silently modify system files.
* Any script requiring elevated privileges should make that requirement explicit.
* Production-oriented scripts should be separated from local development helpers.

## Architecture position

Scripts automate workflows around the project.

They should not contain core business logic, runtime orchestration logic, rendering logic, or protocol definitions.

## Related documentation

Planned documentation:

* `docs/deployment.md`
* `docs/configuration.md`
* `docs/roadmap.md`

