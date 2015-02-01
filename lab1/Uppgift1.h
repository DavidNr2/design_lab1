#ifndef UPPGIFT1_H
#define UPPGIFT1_H

#include "Talker.h"

class SoundProducer;

class Uppgift1
	:public Talker
{
public:
	Uppgift1();
	~Uppgift1();
	void setSoundProducer(SoundProducer *sp);
	void saySomeThing();
private:
	SoundProducer *sp;
};


#endif // !UPPGIFT1_H


