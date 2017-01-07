#include "wiringPi.h"
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
	cout << "test libreria wiringPi\n";
	if(wiringPiSetup())
		cout<<"errore inizializzazione\n";
	pinMode(7,OUTPUT);
	while(1)
	{
		digitalWrite(7,HIGH);
		auto time = chrono::milliseconds(1000);
		this_thread::sleep_for(time);
		digitalWrite(7,LOW);
		this_thread::sleep_for(time);
	}
return 0;
}
