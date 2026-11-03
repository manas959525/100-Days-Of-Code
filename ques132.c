//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include<stdio.h>
int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    
    enum TrafficLight light = RED; // You can change this value to test different cases

    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
    }

    return 0;
}
