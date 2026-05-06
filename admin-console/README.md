# Admin Console

The Admin Console is the configuration and management interface for AURA MK II.

It is not part of the first rendering loop. It exists to manage the system once the core prototype works.

## Responsibilities

The Admin Console may later manage:

- screen layout
- canvas size
- enabled modules
- scenes
- device status
- system updates
- optional cloud configuration
- diagnostics

## Possible forms

The Admin Console can become:

- a local web dashboard
- a Flutter mobile app
- a tablet app
- a desktop configuration tool

The exact interface is not decided yet.

## First development goal

For the MVP, this folder can stay minimal.

Initial configuration should be handled through YAML and JSON files in the `config/` folder.

The Admin Console should only be implemented once the Core System and Display Runtime are working.

## Not responsible for

- Rendering the main interactive surface
- Running the Core System
- Detecting gestures
- Being required for local operation

