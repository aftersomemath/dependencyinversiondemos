#ifndef SensorAbstractor_H
#define SensorAbstractor_H

#include "Sensor.hpp"
typedef Sensor SensorImplementation;

class SensorAbstractor
{
    private:
        SensorImplementation impl;
	public:
        int getValue() {
            return impl.getValue();
        }

};

#endif
