
#include "Light.h"
#include <iostream>

Light::Light()
{
	currentState = LightState::Off;
}

void Light::toggle()
{
	currentState = lightTransitions[currentState];
	printCurrentState();
}
