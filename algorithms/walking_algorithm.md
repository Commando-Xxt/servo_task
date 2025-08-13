
# Humanoid Walk — Outline (FSM)

Phases: weight shift → toe-off → swing → heel-strike → loading → mid/terminal stance.

Pseudo:
```
state = LEFT_SWING_START
loop:
  switch state:
    LEFT_SWING_START:  shift_weight_to_right(); lift_left_leg(); state=LEFT_SWING
    LEFT_SWING:        swing_left_forward(); if heel_contact_left(): state=LEFT_HEEL_STRIKE
    LEFT_HEEL_STRIKE:  load_left_stance(); state=RIGHT_SWING_START
    RIGHT_SWING_START: shift_weight_to_left(); lift_right_leg(); state=RIGHT_SWING
    RIGHT_SWING:       swing_right_forward(); if heel_contact_right(): state=RIGHT_HEEL_STRIKE
    RIGHT_HEEL_STRIKE: load_right_stance(); state=LEFT_SWING_START
```
Keep CoM within support polygon. Limit joint speeds/angles. 
