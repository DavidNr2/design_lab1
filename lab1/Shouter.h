#ifndef SHOUTER_H
#define SHOUTER_H

#include "SoundProducer.h"

class Shouter :
	public SoundProducer
{
public:

	Shouter() : SoundProducer("Shout")
	{
	}

	~Shouter()
	{
	}

	void makeSound(){ cout << "WOW YEEH!!" << std::endl; }
};


#endif // !SHOUTER_H


