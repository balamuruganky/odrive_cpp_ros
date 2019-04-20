#include <iostream>
#include "odrive_cpp_ros/odrive_cpp_ros.h"

#define ODRIVE_SERIAL "35722175526216"

int main(int argc, const char* argv[]) {

    std::string ser_nums[1] = {ODRIVE_SERIAL}; // list of the serial numbers for all connected odrives

    std::string ser_motor_map[2] = {ODRIVE_SERIAL, ODRIVE_SERIAL}; // map from each motor connected to which serial number it belongs to 

    uint8_t motor_indexes[2] = {0, 1}; // map from each connected motor to whether it is M0 or M1 on its respective odrive

    odrive::OdriveDriver odrive_cpp_ros(
            ser_nums,       // serial number array
            1,              // 1 odrive connected 
            ser_motor_map,  // map for each motor to an odrive serial number
            motor_indexes,  // map for each motor being M0 or M1
        2                   //2 motors connected
    );

    int result = odrive_cpp_ros.init(); // initialise the odrive - prepares the usb handles
    std::cout << "Init result: " << result << std::endl;

    int current_pos[2] = {0,0};
    result = odrive_cpp_ros.readCurrentMotorPositions(current_pos); // read the current positions in encoder ticks
    std::cout << "Read enc result: " << result << " value: " << current_pos[0] << " , " << current_pos[1] << std::endl;

}