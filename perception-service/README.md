# Perception Service

The Perception Service converts sensor input into abstract interaction events.

It is responsible for reading IR or depth sensor data and emitting events such as presence, distance, gestures, and active zones.

## Responsibilities

- Read IR or depth sensor data
- Detect user presence
- Estimate distance zones
- Detect simple gestures
- Emit abstract events to the Core System
- Keep raw sensor data isolated from the UI

## Privacy rule

```text
The UI receives events, not images.
```

The Perception Service should not expose raw camera frames to the Display Runtime or modules.

## Example event

```json
{
  "type": "gesture_event",
  "gesture": "swipe_right",
  "zone": "center",
  "confidence": 0.92,
  "timestamp_ms": 123456
}
```

## First development goal

The first version should not require real hardware.

Start with a simulator that emits fake gesture events:

* `presence_detected`
* `swipe_left`
* `swipe_right`
* `hold`
* `zone_changed`

Real IR or depth camera support can come later.

## Not responsible for

* Rendering UI
* Moving windows directly
* Switching scenes directly
* Sending raw images to other services
