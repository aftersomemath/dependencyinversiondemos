#ifndef Logic_H
#define Logic_H


template <class T>
class Logic
{
	public:
		void update(T sensor);

};

// Notice how the declaration is in the header. If it were in the cpp
// The compiler would compile anything that includes Logic.hpp and creates an
// object of any type. It would assume as it always does that the declaration
// Was compiled somewhere else and just use the definition.
// When it gets to the linker it would find in our case that
// Logic<Sensor> does not exist and cannot be linked against.

template <class T>
void Logic<T>::update(T sensor){

	std::cout << "Value is: ";
	std::cout << sensor.getValue();
	std::cout << "\n";
}
#endif