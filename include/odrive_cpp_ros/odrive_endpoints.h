/*
* This file was autogenerated using the "odrivetool generate-code" feature.
*
* The file matches a specific firmware version. If you add/remove/rename any
* properties exposed by the ODrive, this file needs to be regenerated, otherwise
* the ODrive will ignore all commands.
*/

#ifndef __ODRIVE_ENDPOINTS_HPP
#define __ODRIVE_ENDPOINTS_HPP


namespace odrive {
    
static constexpr const uint16_t json_crc = 0xc764;

static constexpr const uint16_t per_axis_offset = 120;

enum { 
    VBUS_VOLTAGE = 1,
    SERIAL_NUMBER = 2,
    HW_VERSION_MAJOR = 3,
    HW_VERSION_MINOR = 4,
    HW_VERSION_VARIANT = 5,
    FW_VERSION_MAJOR = 6,
    FW_VERSION_MINOR = 7,
    FW_VERSION_REVISION = 8,
    FW_VERSION_UNRELEASED = 9,
    USER_CONFIG_LOADED = 10,
    BRAKE_RESISTOR_ARMED = 11,
    SYSTEM_STATS__UPTIME = 12,
    SYSTEM_STATS__MIN_HEAP_SPACE = 13,
    SYSTEM_STATS__MIN_STACK_SPACE_AXIS0 = 14,
    SYSTEM_STATS__MIN_STACK_SPACE_AXIS1 = 15,
    SYSTEM_STATS__MIN_STACK_SPACE_COMMS = 16,
    SYSTEM_STATS__MIN_STACK_SPACE_USB = 17,
    SYSTEM_STATS__MIN_STACK_SPACE_UART = 18,
    SYSTEM_STATS__MIN_STACK_SPACE_USB_IRQ = 19,
    SYSTEM_STATS__MIN_STACK_SPACE_STARTUP = 20,
    SYSTEM_STATS__USB__RX_CNT = 21,
    SYSTEM_STATS__USB__TX_CNT = 22,
    SYSTEM_STATS__USB__TX_OVERRUN_CNT = 23,
    SYSTEM_STATS__I2C__ADDR = 24,
    SYSTEM_STATS__I2C__ADDR_MATCH_CNT = 25,
    SYSTEM_STATS__I2C__RX_CNT = 26,
    SYSTEM_STATS__I2C__ERROR_CNT = 27,
    CONFIG__BRAKE_RESISTANCE = 28,
    CONFIG__ENABLE_UART = 29,
    CONFIG__ENABLE_I2C_INSTEAD_OF_CAN = 30,
    CONFIG__ENABLE_ASCII_PROTOCOL_ON_USB = 31,
    CONFIG__DC_BUS_UNDERVOLTAGE_TRIP_LEVEL = 32,
    CONFIG__DC_BUS_OVERVOLTAGE_TRIP_LEVEL = 33,
    CONFIG__GPIO1_PWM_MAPPING__MIN = 35,
    CONFIG__GPIO1_PWM_MAPPING__MAX = 36,
    CONFIG__GPIO2_PWM_MAPPING__MIN = 38,
    CONFIG__GPIO2_PWM_MAPPING__MAX = 39,
    CONFIG__GPIO3_PWM_MAPPING__MIN = 41,
    CONFIG__GPIO3_PWM_MAPPING__MAX = 42,
    CONFIG__GPIO4_PWM_MAPPING__MIN = 44,
    CONFIG__GPIO4_PWM_MAPPING__MAX = 45,
    CAN__NODE_ID = 286,
    CAN__TXMAILBOXCOMPLETECALLBACKCNT = 287,
    CAN__TXMAILBOXABORTCALLBACKCNT = 288,
    CAN__RECEIVED_MSG_CNT = 289,
    CAN__RECEIVED_ACK = 290,
    CAN__UNEXPECTED_ERRORS = 291,
    CAN__UNHANDLED_MESSAGES = 292,
    TEST_PROPERTY = 293,
    SAVE_CONFIGURATION = 303,
    ERASE_CONFIGURATION = 304,
    REBOOT = 305,
    ENTER_DFU_MODE = 306,

    // Per-Axis endpoints (to be used with read_axis_property and write_axis_property)
    AXIS__ERROR = 46,
    AXIS__STEP_DIR_ACTIVE = 47,
    AXIS__CURRENT_STATE = 48,
    AXIS__REQUESTED_STATE = 49,
    AXIS__LOOP_COUNTER = 50,
    AXIS__CONFIG__STARTUP_MOTOR_CALIBRATION = 51,
    AXIS__CONFIG__STARTUP_ENCODER_INDEX_SEARCH = 52,
    AXIS__CONFIG__STARTUP_ENCODER_OFFSET_CALIBRATION = 53,
    AXIS__CONFIG__STARTUP_CLOSED_LOOP_CONTROL = 54,
    AXIS__CONFIG__STARTUP_SENSORLESS_CONTROL = 55,
    AXIS__CONFIG__ENABLE_STEP_DIR = 56,
    AXIS__CONFIG__COUNTS_PER_STEP = 57,
    AXIS__CONFIG__STEP_GPIO_PIN = 58,
    AXIS__CONFIG__DIR_GPIO_PIN = 59,
    AXIS__CONFIG__RAMP_UP_TIME = 60,
    AXIS__CONFIG__RAMP_UP_DISTANCE = 61,
    AXIS__CONFIG__SPIN_UP_CURRENT = 62,
    AXIS__CONFIG__SPIN_UP_ACCELERATION = 63,
    AXIS__CONFIG__SPIN_UP_TARGET_VEL = 64,
    AXIS__MOTOR__ERROR = 67,
    AXIS__MOTOR__ARMED_STATE = 68,
    AXIS__MOTOR__IS_CALIBRATED = 69,
    AXIS__MOTOR__CURRENT_MEAS_PHB = 70,
    AXIS__MOTOR__CURRENT_MEAS_PHC = 71,
    AXIS__MOTOR__DC_CALIB_PHB = 72,
    AXIS__MOTOR__DC_CALIB_PHC = 73,
    AXIS__MOTOR__PHASE_CURRENT_REV_GAIN = 74,
    AXIS__MOTOR__CURRENT_CONTROL__P_GAIN = 75,
    AXIS__MOTOR__CURRENT_CONTROL__I_GAIN = 76,
    AXIS__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_D = 77,
    AXIS__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_Q = 78,
    AXIS__MOTOR__CURRENT_CONTROL__IBUS = 79,
    AXIS__MOTOR__CURRENT_CONTROL__FINAL_V_ALPHA = 80,
    AXIS__MOTOR__CURRENT_CONTROL__FINAL_V_BETA = 81,
    AXIS__MOTOR__CURRENT_CONTROL__IQ_SETPOINT = 82,
    AXIS__MOTOR__CURRENT_CONTROL__IQ_MEASURED = 83,
    AXIS__MOTOR__CURRENT_CONTROL__MAX_ALLOWED_CURRENT = 84,
    AXIS__MOTOR__CURRENT_CONTROL__OVERCURRENT_TRIP_LEVEL = 85,
    AXIS__MOTOR__GATE_DRIVER__DRV_FAULT = 86,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_GENERAL = 87,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_I = 88,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_DC = 89,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_R = 90,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_L = 91,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_ENC_CALIB = 92,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_IDX_SEARCH = 93,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_FOC_VOLTAGE = 94,
    AXIS__MOTOR__TIMING_LOG__TIMING_LOG_FOC_CURRENT = 95,
    AXIS__MOTOR__CONFIG__PRE_CALIBRATED = 96,
    AXIS__MOTOR__CONFIG__POLE_PAIRS = 97,
    AXIS__MOTOR__CONFIG__CALIBRATION_CURRENT = 98,
    AXIS__MOTOR__CONFIG__RESISTANCE_CALIB_MAX_VOLTAGE = 99,
    AXIS__MOTOR__CONFIG__PHASE_INDUCTANCE = 100,
    AXIS__MOTOR__CONFIG__PHASE_RESISTANCE = 101,
    AXIS__MOTOR__CONFIG__DIRECTION = 102,
    AXIS__MOTOR__CONFIG__MOTOR_TYPE = 103,
    AXIS__MOTOR__CONFIG__CURRENT_LIM = 104,
    AXIS__MOTOR__CONFIG__REQUESTED_CURRENT_RANGE = 105,
    AXIS__MOTOR__CONFIG__CURRENT_CONTROL_BANDWIDTH = 106,
    AXIS__CONTROLLER__ERROR = 107,
    AXIS__CONTROLLER__POS_SETPOINT = 108,
    AXIS__CONTROLLER__VEL_SETPOINT = 109,
    AXIS__CONTROLLER__VEL_INTEGRATOR_CURRENT = 110,
    AXIS__CONTROLLER__CURRENT_SETPOINT = 111,
    AXIS__CONTROLLER__VEL_RAMP_TARGET = 112,
    AXIS__CONTROLLER__VEL_RAMP_ENABLE = 113,
    AXIS__CONTROLLER__CONFIG__CONTROL_MODE = 114,
    AXIS__CONTROLLER__CONFIG__POS_GAIN = 115,
    AXIS__CONTROLLER__CONFIG__VEL_GAIN = 116,
    AXIS__CONTROLLER__CONFIG__VEL_INTEGRATOR_GAIN = 117,
    AXIS__CONTROLLER__CONFIG__VEL_LIMIT = 118,
    AXIS__CONTROLLER__CONFIG__VEL_LIMIT_TOLERANCE = 119,
    AXIS__CONTROLLER__CONFIG__VEL_RAMP_RATE = 120,
    AXIS__CONTROLLER__CONFIG__SETPOINTS_IN_CPR = 121,
    AXIS__CONTROLLER__START_ANTICOGGING_CALIBRATION = 133,
    AXIS__ENCODER__ERROR = 134,
    AXIS__ENCODER__IS_READY = 135,
    AXIS__ENCODER__INDEX_FOUND = 136,
    AXIS__ENCODER__SHADOW_COUNT = 137,
    AXIS__ENCODER__COUNT_IN_CPR = 138,
    AXIS__ENCODER__INTERPOLATION = 139,
    AXIS__ENCODER__PHASE = 140,
    AXIS__ENCODER__POS_ESTIMATE = 141,
    AXIS__ENCODER__POS_CPR = 142,
    AXIS__ENCODER__HALL_STATE = 143,
    AXIS__ENCODER__VEL_ESTIMATE = 144,
    AXIS__ENCODER__CONFIG__MODE = 145,
    AXIS__ENCODER__CONFIG__USE_INDEX = 146,
    AXIS__ENCODER__CONFIG__PRE_CALIBRATED = 147,
    AXIS__ENCODER__CONFIG__IDX_SEARCH_SPEED = 148,
    AXIS__ENCODER__CONFIG__ZERO_COUNT_ON_FIND_IDX = 149,
    AXIS__ENCODER__CONFIG__CPR = 150,
    AXIS__ENCODER__CONFIG__OFFSET = 151,
    AXIS__ENCODER__CONFIG__OFFSET_FLOAT = 152,
    AXIS__ENCODER__CONFIG__BANDWIDTH = 153,
    AXIS__ENCODER__CONFIG__CALIB_RANGE = 154,
    AXIS__SENSORLESS_ESTIMATOR__ERROR = 155,
    AXIS__SENSORLESS_ESTIMATOR__PHASE = 156,
    AXIS__SENSORLESS_ESTIMATOR__PLL_POS = 157,
    AXIS__SENSORLESS_ESTIMATOR__VEL_ESTIMATE = 158,
    AXIS__SENSORLESS_ESTIMATOR__CONFIG__OBSERVER_GAIN = 159,
    AXIS__SENSORLESS_ESTIMATOR__CONFIG__PLL_BANDWIDTH = 160,
    AXIS__SENSORLESS_ESTIMATOR__CONFIG__PM_FLUX_LINKAGE = 161,
    AXIS__TRAP_TRAJ__CONFIG__VEL_LIMIT = 162,
    AXIS__TRAP_TRAJ__CONFIG__ACCEL_LIMIT = 163,
    AXIS__TRAP_TRAJ__CONFIG__DECEL_LIMIT = 164,
    AXIS__TRAP_TRAJ__CONFIG__A_PER_CSS = 165,
};

template<int I>
struct endpoint_type;

template<> struct endpoint_type<VBUS_VOLTAGE> { typedef float type; };
template<> struct endpoint_type<SERIAL_NUMBER> { typedef uint64_t type; };
template<> struct endpoint_type<HW_VERSION_MAJOR> { typedef uint8_t type; };
template<> struct endpoint_type<HW_VERSION_MINOR> { typedef uint8_t type; };
template<> struct endpoint_type<HW_VERSION_VARIANT> { typedef uint8_t type; };
template<> struct endpoint_type<FW_VERSION_MAJOR> { typedef uint8_t type; };
template<> struct endpoint_type<FW_VERSION_MINOR> { typedef uint8_t type; };
template<> struct endpoint_type<FW_VERSION_REVISION> { typedef uint8_t type; };
template<> struct endpoint_type<FW_VERSION_UNRELEASED> { typedef uint8_t type; };
template<> struct endpoint_type<USER_CONFIG_LOADED> { typedef bool type; };
template<> struct endpoint_type<BRAKE_RESISTOR_ARMED> { typedef bool type; };
template<> struct endpoint_type<SYSTEM_STATS__UPTIME> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_HEAP_SPACE> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_AXIS0> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_AXIS1> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_COMMS> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_USB> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_UART> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_USB_IRQ> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__MIN_STACK_SPACE_STARTUP> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__USB__RX_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__USB__TX_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__USB__TX_OVERRUN_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__I2C__ADDR> { typedef uint8_t type; };
template<> struct endpoint_type<SYSTEM_STATS__I2C__ADDR_MATCH_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__I2C__RX_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<SYSTEM_STATS__I2C__ERROR_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<CONFIG__BRAKE_RESISTANCE> { typedef float type; };
template<> struct endpoint_type<CONFIG__ENABLE_UART> { typedef bool type; };
template<> struct endpoint_type<CONFIG__ENABLE_I2C_INSTEAD_OF_CAN> { typedef bool type; };
template<> struct endpoint_type<CONFIG__ENABLE_ASCII_PROTOCOL_ON_USB> { typedef bool type; };
template<> struct endpoint_type<CONFIG__DC_BUS_UNDERVOLTAGE_TRIP_LEVEL> { typedef float type; };
template<> struct endpoint_type<CONFIG__DC_BUS_OVERVOLTAGE_TRIP_LEVEL> { typedef float type; };
template<> struct endpoint_type<CONFIG__GPIO1_PWM_MAPPING__MIN> { typedef float type; };
template<> struct endpoint_type<CONFIG__GPIO1_PWM_MAPPING__MAX> { typedef float type; };
template<> struct endpoint_type<CONFIG__GPIO2_PWM_MAPPING__MIN> { typedef float type; };
template<> struct endpoint_type<CONFIG__GPIO2_PWM_MAPPING__MAX> { typedef float type; };
template<> struct endpoint_type<CONFIG__GPIO3_PWM_MAPPING__MIN> { typedef float type; };
template<> struct endpoint_type<CONFIG__GPIO3_PWM_MAPPING__MAX> { typedef float type; };
template<> struct endpoint_type<CONFIG__GPIO4_PWM_MAPPING__MIN> { typedef float type; };
template<> struct endpoint_type<CONFIG__GPIO4_PWM_MAPPING__MAX> { typedef float type; };
template<> struct endpoint_type<CAN__NODE_ID> { typedef uint8_t type; };
template<> struct endpoint_type<CAN__TXMAILBOXCOMPLETECALLBACKCNT> { typedef uint32_t type; };
template<> struct endpoint_type<CAN__TXMAILBOXABORTCALLBACKCNT> { typedef uint32_t type; };
template<> struct endpoint_type<CAN__RECEIVED_MSG_CNT> { typedef uint32_t type; };
template<> struct endpoint_type<CAN__RECEIVED_ACK> { typedef uint32_t type; };
template<> struct endpoint_type<CAN__UNEXPECTED_ERRORS> { typedef uint32_t type; };
template<> struct endpoint_type<CAN__UNHANDLED_MESSAGES> { typedef uint32_t type; };
template<> struct endpoint_type<TEST_PROPERTY> { typedef uint32_t type; };
template<> struct endpoint_type<SAVE_CONFIGURATION> { typedef void type; };
template<> struct endpoint_type<ERASE_CONFIGURATION> { typedef void type; };
template<> struct endpoint_type<REBOOT> { typedef void type; };
template<> struct endpoint_type<ENTER_DFU_MODE> { typedef void type; };


// Per-axis endpoints
template<> struct endpoint_type<AXIS__ERROR> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__STEP_DIR_ACTIVE> { typedef bool type; };
template<> struct endpoint_type<AXIS__CURRENT_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__REQUESTED_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__LOOP_COUNTER> { typedef uint32_t type; };
template<> struct endpoint_type<AXIS__CONFIG__STARTUP_MOTOR_CALIBRATION> { typedef bool type; };
template<> struct endpoint_type<AXIS__CONFIG__STARTUP_ENCODER_INDEX_SEARCH> { typedef bool type; };
template<> struct endpoint_type<AXIS__CONFIG__STARTUP_ENCODER_OFFSET_CALIBRATION> { typedef bool type; };
template<> struct endpoint_type<AXIS__CONFIG__STARTUP_CLOSED_LOOP_CONTROL> { typedef bool type; };
template<> struct endpoint_type<AXIS__CONFIG__STARTUP_SENSORLESS_CONTROL> { typedef bool type; };
template<> struct endpoint_type<AXIS__CONFIG__ENABLE_STEP_DIR> { typedef bool type; };
template<> struct endpoint_type<AXIS__CONFIG__COUNTS_PER_STEP> { typedef float type; };
template<> struct endpoint_type<AXIS__CONFIG__STEP_GPIO_PIN> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__CONFIG__DIR_GPIO_PIN> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__CONFIG__RAMP_UP_TIME> { typedef float type; };
template<> struct endpoint_type<AXIS__CONFIG__RAMP_UP_DISTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS__CONFIG__SPIN_UP_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS__CONFIG__SPIN_UP_ACCELERATION> { typedef float type; };
template<> struct endpoint_type<AXIS__CONFIG__SPIN_UP_TARGET_VEL> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__ERROR> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__ARMED_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__MOTOR__IS_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_MEAS_PHB> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_MEAS_PHC> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__DC_CALIB_PHB> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__DC_CALIB_PHC> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__PHASE_CURRENT_REV_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__P_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__I_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_D> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__V_CURRENT_CONTROL_INTEGRAL_Q> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__IBUS> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__FINAL_V_ALPHA> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__FINAL_V_BETA> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__IQ_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__IQ_MEASURED> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__MAX_ALLOWED_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CURRENT_CONTROL__OVERCURRENT_TRIP_LEVEL> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__GATE_DRIVER__DRV_FAULT> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_GENERAL> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_I> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_ADC_CB_DC> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_R> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_MEAS_L> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_ENC_CALIB> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_IDX_SEARCH> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_FOC_VOLTAGE> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__TIMING_LOG__TIMING_LOG_FOC_CURRENT> { typedef uint16_t type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__PRE_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__POLE_PAIRS> { typedef int32_t type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__CALIBRATION_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__RESISTANCE_CALIB_MAX_VOLTAGE> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__PHASE_INDUCTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__PHASE_RESISTANCE> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__DIRECTION> { typedef int32_t type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__MOTOR_TYPE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__CURRENT_LIM> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__REQUESTED_CURRENT_RANGE> { typedef float type; };
template<> struct endpoint_type<AXIS__MOTOR__CONFIG__CURRENT_CONTROL_BANDWIDTH> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__CONTROLLER__POS_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__VEL_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__VEL_INTEGRATOR_CURRENT> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CURRENT_SETPOINT> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__VEL_RAMP_TARGET> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__VEL_RAMP_ENABLE> { typedef bool type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CONFIG__CONTROL_MODE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CONFIG__POS_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CONFIG__VEL_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CONFIG__VEL_INTEGRATOR_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CONFIG__VEL_LIMIT> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CONFIG__VEL_LIMIT_TOLERANCE> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CONFIG__VEL_RAMP_RATE> { typedef float type; };
template<> struct endpoint_type<AXIS__CONTROLLER__CONFIG__SETPOINTS_IN_CPR> { typedef bool type; };
template<> struct endpoint_type<AXIS__CONTROLLER__START_ANTICOGGING_CALIBRATION> { typedef void type; };
template<> struct endpoint_type<AXIS__ENCODER__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__ENCODER__IS_READY> { typedef bool type; };
template<> struct endpoint_type<AXIS__ENCODER__INDEX_FOUND> { typedef bool type; };
template<> struct endpoint_type<AXIS__ENCODER__SHADOW_COUNT> { typedef int32_t type; };
template<> struct endpoint_type<AXIS__ENCODER__COUNT_IN_CPR> { typedef int32_t type; };
template<> struct endpoint_type<AXIS__ENCODER__INTERPOLATION> { typedef float type; };
template<> struct endpoint_type<AXIS__ENCODER__PHASE> { typedef float type; };
template<> struct endpoint_type<AXIS__ENCODER__POS_ESTIMATE> { typedef float type; };
template<> struct endpoint_type<AXIS__ENCODER__POS_CPR> { typedef float type; };
template<> struct endpoint_type<AXIS__ENCODER__HALL_STATE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__ENCODER__VEL_ESTIMATE> { typedef float type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__MODE> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__USE_INDEX> { typedef bool type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__PRE_CALIBRATED> { typedef bool type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__IDX_SEARCH_SPEED> { typedef float type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__ZERO_COUNT_ON_FIND_IDX> { typedef bool type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__CPR> { typedef int32_t type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__OFFSET> { typedef int32_t type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__OFFSET_FLOAT> { typedef float type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__BANDWIDTH> { typedef float type; };
template<> struct endpoint_type<AXIS__ENCODER__CONFIG__CALIB_RANGE> { typedef float type; };
template<> struct endpoint_type<AXIS__SENSORLESS_ESTIMATOR__ERROR> { typedef uint8_t type; };
template<> struct endpoint_type<AXIS__SENSORLESS_ESTIMATOR__PHASE> { typedef float type; };
template<> struct endpoint_type<AXIS__SENSORLESS_ESTIMATOR__PLL_POS> { typedef float type; };
template<> struct endpoint_type<AXIS__SENSORLESS_ESTIMATOR__VEL_ESTIMATE> { typedef float type; };
template<> struct endpoint_type<AXIS__SENSORLESS_ESTIMATOR__CONFIG__OBSERVER_GAIN> { typedef float type; };
template<> struct endpoint_type<AXIS__SENSORLESS_ESTIMATOR__CONFIG__PLL_BANDWIDTH> { typedef float type; };
template<> struct endpoint_type<AXIS__SENSORLESS_ESTIMATOR__CONFIG__PM_FLUX_LINKAGE> { typedef float type; };
template<> struct endpoint_type<AXIS__TRAP_TRAJ__CONFIG__VEL_LIMIT> { typedef float type; };
template<> struct endpoint_type<AXIS__TRAP_TRAJ__CONFIG__ACCEL_LIMIT> { typedef float type; };
template<> struct endpoint_type<AXIS__TRAP_TRAJ__CONFIG__DECEL_LIMIT> { typedef float type; };
template<> struct endpoint_type<AXIS__TRAP_TRAJ__CONFIG__A_PER_CSS> { typedef float type; };


template<int I>
using endpoint_type_t = typename endpoint_type<I>::type;

}

#endif // __ODRIVE_ENDPOINTS_HPP