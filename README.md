
# Servo Task (4 Motors)

**Goal:** Sweep 4 servos for ~2s, then hold all at **90°**.

## Folder Structure
```
.
├─ src/servo_sweep_hold/servo_sweep_hold.ino
├─ docs/wiring.md
├─ algorithms/walking_algorithm.md
├─ assets/
├─ .gitignore
└─ LICENSE
```

## Hardware
- Arduino UNO/Nano (or compatible)
- 4x SG90/MG90S servos
- External 5–6V power for servos (recommended)
- Common GND between Arduino and servo PSU

## Build
1. Open `src/servo_sweep_hold/servo_sweep_hold.ino`.
2. Select board/port in Arduino IDE.
3. Upload.

## Expected
- Sweep motion for ~2s.
- Then all servos stay at **90°**.

## Notes
- Change pins in `PINS` if needed.
- Use external power. Tie GNDs together.
