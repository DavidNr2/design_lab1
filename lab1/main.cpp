// lab1.cpp : Defines the entry point for the console application.
//

#include "main.h"
#include "Whisperer.h"
#include "shouter.h"


int main()
{
	Uppgift1 uppg1;
	uppg1.setSoundProducer(new Whisperer);
	uppg1.saySomeThing();
	uppg1.setSoundProducer(new Shouter);
	uppg1.saySomeThing();

	return 0;
}

