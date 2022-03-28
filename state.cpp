#include "Light.h" 
#include "LightState.h"
#include <iostream>

int main() { 
    

    Light light; 
    for (int i = 0; i < 1000000 ; i++){
        light.toggle();
    }
    
    return 0; 
} 