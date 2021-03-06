//
//  Copyright (c) 2014 richards-tech
//
//  This file is part of RTIMULib
//
//  RTIMULib is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  RTIMULib is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with RTIMULib.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef _RTIMULIBDEFS_H
#define	_RTIMULIBDEFS_H

#include "RTMath.h"

//  This is a convenience structure that can be used to pass IMU data around

typedef struct
{
    uint64_t timestamp;
    bool fusionPoseValid;
    RTVector3 fusionPose;
    bool fusionQPoseValid;
    RTQuaternion fusionQPose;
    bool gyroValid;
    RTVector3 gyro;
    bool accelValid;
    RTVector3 accel;
    bool compassValid;
    RTVector3 compass;
    bool pressureValid;
    RTFLOAT pressure;
    bool temperatureValid;
    RTFLOAT temperature;
    bool humidityValid;
    RTFLOAT humidity;
} RTIMU_DATA;

#endif // _RTIMULIBDEFS_H
