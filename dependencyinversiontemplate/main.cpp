
#include <iostream>
#include "Logic.hpp"
#include "Sensor.hpp"

int main( void ) 
{
	std::cout << "Hello\n";

	// Only need to change things in one location to
	// Switch the class used.
	// No dependency inversion is involved.
	Logic<Sensor> logic;
	Sensor sensor;

	logic.update(sensor);

	return 0;
}