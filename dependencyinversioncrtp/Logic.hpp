#ifndef Logic_H
#define Logic_H

#include "SensorAbstractor.hpp"

template<class T> 
class Logic
{
	public:
		void update(SensorAbstractor<T> sensor);

};

template<class T>
void Logic<T>::update(SensorAbstractor<T> sensor){

	std::cout << "Value is: ";
	std::cout << sensor.getValue();
	std::cout << "\n";
}

#endif