#ifndef SOUNDPRODUCER_H
#define SOUNDPRODUCER_H

#include <string>
#include <iostream>


using std::cout;
using std::string;

class SoundProducer
{
public:

	SoundProducer(){}
	
	SoundProducer(string nameOfSound)
	{
		soundName = nameOfSound;
	}

	virtual ~SoundProducer()
	{}

	virtual void makeSound() = 0;
	
	string getSoundName(){ return soundName; }

private:
	string soundName;
};


#endif // !SOUNDPRODUCER_H

