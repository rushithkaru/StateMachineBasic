#pragma once
#include "LightState.h"


class Light
{
public:
	Light();
	void toggle();
	inline LightState getCurrentState() const { return currentState; }
	void printCurrentState() const {
		if (currentState == LightState::Off){
			printf("currently off \n");
		}
		if (currentState == LightState::Low){
			printf("currently Low \n");
		}
		if (currentState == LightState::Medium){
			printf("currently Medium \n");
		}
		if (currentState == LightState::High){
			printf("currently High \n");
		}
	}

private:
	LightState currentState;
	std::map<LightState, LightState> lightTransitions = {
	{LightState::Off, LightState::Low},
	{LightState::Low, LightState::Medium},
	{LightState::Medium, LightState::High},
	{LightState::High, LightState::Off}
};
};
