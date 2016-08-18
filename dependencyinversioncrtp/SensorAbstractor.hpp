#ifndef SensorAbstractor_H
#define SensorAbstractor_H

template <class T>
class SensorAbstractor
{
	public:
	int getValue()
    {
        return static_cast<T*>(this)->getValue();
    }
};

#endif