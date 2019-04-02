#ifndef _DEFINITIONS_HPP_
#define _DEFINITIONS_HPP

#include "main.h"

/*
 * A header file simplifying enumeration values,
 * similar to #define PROS_USE_SIMPLE_NAMES
 *
 * These values are constant, defined aliases for common enumerations
 */

// Controller enumereration definitions
#define CONTROLLER_MAIN pros::E_CONTROLLER_MASTER
#define CONTROLLER_PARTNER pros::E_CONTROLLER_PARTNER
#define STICK_LEFT_X pros::E_CONTROLLER_ANALOG_LEFT_X
#define STICK_LEFT_Y pros::E_CONTROLLER_ANALOG_LEFT_Y
#define STICK_RIGHT_X pros::E_CONTROLLER_ANALOG_RIGHT_X
#define STICK_RIGHT_Y pros::E_CONTROLLER_ANALOG_RIGHT_Y
#define BUTTON_UP pros::E_CONTROLLER_DIGITAL_UP
#define BUTTON_DOWN pros::E_CONTROLLER_DIGITAL_DOWN
#define BUTTON_LEFT pros::E_CONTROLLER_DIGITAL_LEFT
#define BUTTON_RIGHT pros::E_CONTROLLER_DIGITAL_RIGHT
#define BUTTON_A pros::E_CONTROLLER_DIGITAL_A
#define BUTTON_B pros::E_CONTROLLER_DIGITAL_B
#define BUTTON_X pros::E_CONTROLLER_DIGITAL_X
#define BUTTON_Y pros::E_CONTROLLER_DIGITAL_Y
#define BUTTON_L1 pros::E_CONTROLLER_DIGITAL_L1
#define BUTTON_L2 pros::E_CONTROLLER_DIGITAL_L2
#define BUTTON_R1 pros::E_CONTROLLER_DIGITAL_R1
#define BUTTON_R2 pros::E_CONTROLLER_DIGITAL_R2

// Motor enumeration definitions
#define GEARSET_600 pros::E_MOTOR_GEARSET_06 // 6:1, 600 RPM, Blue gear
#define GEARSET_200 pros::E_MOTOR_GEARSET_18 // 18:1, 200 RPM, Green gear set
#define GEARSET_100 pros:: E_MOTOR_GEARSET_36 // 36:1, 100 RPM, Red gear set
#define FWD false
#define REV true
#define ENCODER_DEGREES pros::E_MOTOR_ENCODER_DEGREES
#define ENCODER_REVOLUTIONS pros::E_MOTOR_ENCODER_REVOLUTIONS
#define ENCODER_COUNTS pros::E_MOTOR_ENCODER_COUNTS
#define BRAKE_COAST pros::E_MOTOR_BRAKE_COAST
#define BRAKE_BRAKE pros::E_MOTOR_BRAKE_BRAKE
#define BRAKE_HOLD pros::E_MOTOR_BRAKE_HOLD

// Notification enumeration definitions
#define NOTIFY_BITS pros::E_NOTIFY_ACTION_BITS
#define NOTIFY_INCR pros::E_NOTIFY_ACTION_INCR
#define NOTIFY_NO_OWRITE pros::E_NOTIFY_ACTION_NO_OWRITE
#define NOTIFY_OWRITE pros::E_NOTIFY_ACTION_OWRITE

// Logging enumeration definitions
#define LOG_DISABLE E_LOGGING_DISABLE
#define LOG_SEVERE E_LOGGING_SEVERE
#define LOG_ERROR E_LOGGING_ERROR
#define LOG_WARNING E_LOGGING_WARNING
#define LOG_INFO E_LOGGING_INFO
#define LOG_DEBUG_MOTOR E_LOGGING_DEBUG_MOTOR
#define LOG_DEBUG_LOGIC E_LOGGING_DEBUG_LOGIC

// Math definitions
#define PI 3.141592653589793238

#endif
