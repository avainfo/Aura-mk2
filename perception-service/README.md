# Perception Service

The Perception Service is the sensing layer of AURA MK II.

It converts local IR or depth sensor input into abstract interaction events that can be consumed by the Core System.

## Scope

- IR or depth sensor access
- Presence detection
- Distance zone estimation
- Gesture recognition
- Active zone detection
- Confidence scoring
- Local event publishing
- Sensor pipeline isolation

## Interfaces

Receives:

- sensor frames or depth data
- local perception configuration
- calibration parameters

Emits:

- presence events
- distance events
- gesture events
- active zone updates
- confidence metadata
- sensor health status

## Architecture position

The Perception Service is isolated from the rendering layer.

It does not control windows, scenes, or modules directly. It emits abstract events to the Core System, which decides how those events affect the interface.

Raw sensor data must remain inside the perception pipeline. The Display Runtime and modules should receive events, not images.

## Privacy model

The service is designed around local perception and minimal data exposure.

Its output should be limited to normalized events such as presence, distance, gesture type, active zone, confidence, and timestamps.

## Related documentation

Planned documentation:

- `docs/architecture.md`
- `docs/gesture-navigation.md`
- `docs/privacy-model.md`
- `docs/protocol.md`
