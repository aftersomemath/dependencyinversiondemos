#ifndef Sensor_H
#define Sensor_H

#include "SensorAbstractor.hpp"

class Sensor: public SensorAbstractor
{
	public:
		virtual int getValue();

};
#endif