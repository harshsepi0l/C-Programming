/*
Write a C function to detect if a button is pressed or not. The button must be pressed/unpressed for 5 consecutive "checks" before the value reverts. 
In other words, the function starts with the button being unpressed. Every "check" happens in 10ms intervals. With each "check", the button will either 
be pressed or unpressed. You must wait for 5 "checks" (50ms) of continuous pressed/unpressed status updates before you update the output.
*/

// if button is pressed = 1, and if button is NOT pressed = 0

#include <stdbool.h>
#include <stdio.h>

#define CHECK_THRESHOLD 5

// Constants for button states
#define UNPRESSED 0
#define PRESSED 1

// Structure to represent the state and properties of the button
struct Button {
    int currentState;           // the overall "confirmed" state of the button
    int lastCheckState;         // the state we observed in the latest check
    int consecutiveCount;       // how many times in a row we've observed the current state
};

// Initialize the button with its default state
void Button_Init(struct Button *btn) {
    btn->currentState = UNPRESSED;
    btn->lastCheckState = UNPRESSED;
    btn->consecutiveCount = 0;
}

// This function should be called every time we "check" the button (i.e., every 10ms)
// It updates the button's state based on the new reading
void Button_Update(struct Button *btn, int newCheckState) {
    if (btn->lastCheckState == newCheckState) {
        btn->consecutiveCount++;
        if (btn->consecutiveCount == CHECK_THRESHOLD) {
            btn->currentState = newCheckState;
            btn->consecutiveCount = 0; // reset for the next series of readings
        }
    } else {
        btn->consecutiveCount = 1;
        btn->lastCheckState = newCheckState;
    }
}

int main() {
    struct Button btn;
    Button_Init(&btn);

    // Example simulation
    int simulatedReadings[10] = {PRESSED, PRESSED, PRESSED, PRESSED, PRESSED, UNPRESSED, UNPRESSED, UNPRESSED, UNPRESSED, UNPRESSED};

    for (int i = 0; i < 10; i++) {
        Button_Update(&btn, simulatedReadings[i]);
        printf("Check %d: Button is %s\n", i+1, btn.currentState == PRESSED ? "PRESSED" : "UNPRESSED");
    }

    return 0;
}
