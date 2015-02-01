#include "Uppgift1.h"
//#include "Whisperer.h"
//#include "Shouter.h"

#include "SoundProducer.h"

Uppgift1::Uppgift1()
{
}


Uppgift1::~Uppgift1()
{
	delete sp;
}


void Uppgift1::setSoundProducer(SoundProducer *setSp)
{
	sp = setSp;
}

void Uppgift1::saySomeThing()
{
	cout << sp->getSoundName() << ": ";
	sp->makeSound();
}