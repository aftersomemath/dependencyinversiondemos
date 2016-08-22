
#include <iostream>
#include "Logic.hpp"
#include "Sensor.hpp"

int main( void ) 
{
	std::cout << "Hello\n";

	Logic logic;
	SensorAbstractor sensor;

	logic.update(sensor);

	return 0;
}
