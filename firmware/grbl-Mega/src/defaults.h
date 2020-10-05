/*
  defaults.h - defaults settings configuration file
  Part of Grbl

  Copyright (c) 2017-2018 Gauthier Briere
  Copyright (c) 2012-2016 Sungeun K. Jeon for Gnea Research LLC

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

/* The defaults.h file serves as a central default settings selector for different machine
   types, from DIY CNC mills to CNC conversions of off-the-shelf machines. The settings
   files listed here are supplied by users, so your results may vary. However, this should
   give you a good starting point as you get to know your machine and tweak the settings for
   your nefarious needs.
   NOTE: Ensure one and only one of these DEFAULTS_XXX values is defined in config.h */

#ifndef defaults_h

#ifdef DEFAULTS_GENERIC
  // Grbl generic default settings. Should work across different machines.
  #define DEFAULT_AXIS1_STEPS_PER_UNIT 200.0
  #define DEFAULT_AXIS2_STEPS_PER_UNIT 800.0
  #define DEFAULT_AXIS3_STEPS_PER_UNIT 800.0
  #define DEFAULT_AXIS1_MAX_RATE 1000.0 // mm/min
  #define DEFAULT_AXIS2_MAX_RATE 300.0 // mm/min
  #define DEFAULT_AXIS3_MAX_RATE 300.0 // mm/min
  #define DEFAULT_AXIS1_ACCELERATION 100 // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS2_ACCELERATION 100 // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS3_ACCELERATION 100 // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS1_MAX_TRAVEL 800.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_AXIS2_MAX_TRAVEL 500.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_AXIS3_MAX_TRAVEL 180.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_SPINDLE_RPM_MAX 1000.0 // rpm
  #define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK 0
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 250 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 1 // MPos enabled
  #define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002 // mm
  #define DEFAULT_REPORT_INCHES 0 // false
  #define DEFAULT_INVERT_ST_ENABLE 0 // false
  #define DEFAULT_INVERT_LIMIT_PINS 0 // false
  #define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
  #define DEFAULT_HARD_LIMIT_ENABLE 0  // false
  #define DEFAULT_INVERT_PROBE_PIN 0 // false
  #define DEFAULT_LASER_MODE 0 // false
  #define DEFAULT_HOMING_ENABLE 1  // false
  #define DEFAULT_HOMING_DIR_MASK 7 // move positive dir
  #define DEFAULT_HOMING_FEED_RATE 250 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 1000 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 2.0 // mm
#endif

#ifdef DEFAULTS_RAMPS_BOARD
  #define DEFAULT_AXIS1_STEPS_PER_UNIT 200
  #define DEFAULT_AXIS2_STEPS_PER_UNIT 800
  #define DEFAULT_AXIS3_STEPS_PER_UNIT 800
  #define DEFAULT_AXIS1_MAX_RATE 2000.0 // 9000 mm/min = 9000/60 = 150 mm/sec
  #define DEFAULT_AXIS2_MAX_RATE 500.0 // 9000 mm/min = 9000/60 = 150 mm/sec
  #define DEFAULT_AXIS3_MAX_RATE 500.0  //  300 mm/min =  300/60 =   5 mm/sec
  #define DEFAULT_AXIS1_ACCELERATION (100.0*60*60) // 300*60*60 mm/min^2 = 300 mm/sec^2
  #define DEFAULT_AXIS2_ACCELERATION (100.0*60*60) // 300*60*60 mm/min^2 = 300 mm/sec^2
  #define DEFAULT_AXIS3_ACCELERATION (100.0*60*60) // 100*60*60 mm/min^2 = 100 mm/sec^2
  #define DEFAULT_AXIS1_MAX_TRAVEL 800.0 // mm
  #define DEFAULT_AXIS2_MAX_TRAVEL 500.0 // mm
  #define DEFAULT_AXIS3_MAX_TRAVEL 180.0 // mm
  #if N_AXIS > 3
    #define DEFAULT_AXIS4_STEPS_PER_UNIT 800 // Direct drive : (200 pas par tours * 1/16 microsteps)/360°
    #define DEFAULT_AXIS4_MAX_RATE 1000 // °/mn
    #define DEFAULT_AXIS4_ACCELERATION (100.0*60*60) // 100*60*60 mm/min^2 = 100 mm/sec^2
    #define DEFAULT_AXIS4_MAX_TRAVEL 360.0 // °
  #endif
  #if N_AXIS > 4
    #define DEFAULT_AXIS5_STEPS_PER_UNIT 800 // Direct drive : (200 pas par tours * 1/16 microsteps)/360°
    #define DEFAULT_AXIS5_MAX_RATE 1000 // °/mn
    #define DEFAULT_AXIS5_ACCELERATION (100.0*60*60) // 100*60*60 mm/min^2 = 100 mm/sec^2
    #define DEFAULT_AXIS5_MAX_TRAVEL 180.0 // °
  #endif
  #if N_AXIS > 5
    #define DEFAULT_AXIS6_STEPS_PER_UNIT 800 // Direct drive : (200 pas par tours * 1/16 microsteps)/360°
    #define DEFAULT_AXIS6_MAX_RATE 1000 // °/mn
    #define DEFAULT_AXIS6_ACCELERATION (100.0*60*60) // 100*60*60 mm/min^2 = 100 mm/sec^2
    #define DEFAULT_AXIS6_MAX_TRAVEL 180.0 // °
  #endif
  #define DEFAULT_SPINDLE_RPM_MAX 1000.0 // rpm
  #define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK 0
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 254 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 1 // MPos enabled
  #define DEFAULT_JUNCTION_DEVIATION 0.02 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002 // mm
  #define DEFAULT_REPORT_INCHES 0 // false
  #define DEFAULT_INVERT_ST_ENABLE 0 // false
  #define DEFAULT_INVERT_LIMIT_PINS 0 // false
  #define DEFAULT_SOFT_LIMIT_ENABLE 1 // true
  #define DEFAULT_HARD_LIMIT_ENABLE 0  // false
  #define DEFAULT_INVERT_PROBE_PIN 0 // false
  #define DEFAULT_LASER_MODE 1 // false
  #define DEFAULT_HOMING_ENABLE 1  // true
  #define DEFAULT_HOMING_DIR_MASK 7 // move positive dir
  #define DEFAULT_HOMING_FEED_RATE 250 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 1000 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 3 // mm
#endif

#endif