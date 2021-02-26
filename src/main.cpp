#include <Arduino.h>

// TODO решить с платой: с wifi или оставить nano и добавить физическое управление

#define redPin 11
#define greenPin 10
#define bluePin 9

#define DELAY 10

int val;

void setup()
{
	pinMode(redPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
	pinMode(greenPin, OUTPUT);
}

void loop()
{
	for (val = 255; val > 0; val--)
	{
		analogWrite(redPin, val);  //set PWM value for red
		analogWrite(greenPin, 128 - val); //set PWM value for green
		analogWrite(bluePin, 255 - val); //set PWM value for blue

		delay(DELAY);
	}
	for (val = 0; val < 255; val++)
	{
		analogWrite(redPin, val);
		analogWrite(greenPin, 128 - val);
		analogWrite(bluePin, 255 - val);

		delay(DELAY);
	}
}
