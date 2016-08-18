#include <iostream>

#include "Logic.hpp"
#include "SensorAbstractor.hpp"

void Logic::update(SensorAbstractor& sensor){

	std::cout << "Value is: ";
	std::cout << sensor.getValue();
	std::cout << "\n";
}