#include "Light.h" 
#include "LightState.h"
#include <iostream>

int main() { 
    

    Light light; 
    for (int i = 0; i < 10 ; i++){
        light.toggle();
    }
    
    return 0; 
} 