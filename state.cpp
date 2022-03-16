#include "Light.h" 
#include "ConcreteLightStates.h"

int main() { class LightState;

Light light; 
light.setState(LowIntensity::getInstance()); 
light.setState(HighIntensity::getInstance()); 
light.toggle();

return 0; } 