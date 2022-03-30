#include "Light.h" 
#include "LightState.h"
#include <iostream>
#include <thread>
#include <chrono>

bool check = true;

void thread_test(const char* name) {
    unsigned int count = 0;
    while (check) {
        count++;
    }
    printf("%s count %u.\n", name, count);
}

int main() { 
    
    std::thread t1(thread_test, "user1");
    std::thread t2(thread_test, "user2");
    
	printf("Starting threads \n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    check = false;
    
    Light light; 
    for (int i = 0; i < 100 ; i++){
        light.toggle();
    }
    t1.join();
    t2.join();
    
    return 0; 
} 