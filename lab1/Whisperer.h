#ifndef WHISPERER_H
#define WHISPERER

#include "SoundProducer.h"

class Whisperer :
	public SoundProducer
{
public:

	Whisperer() : SoundProducer("Whisper")
	{}

	~Whisperer()
	{
	}

	void makeSound(){ std::cout << "Ssch, hush, hush" << std::endl; }

};

#endif // !WHISPERER_H


