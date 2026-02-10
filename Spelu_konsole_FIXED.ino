// Complete corrected code for Spelu_konsole_FIXED.ino

#include <Gamepad.h>

Gamepad gamepad;

// Original mapX and mapY coordinate functions
int mapX(int value, int fromLow, int fromHigh, int toLow, int toHigh) {
    return (value - fromLow) * (toHigh - toLow) / (fromHigh - fromLow) + toLow;
}

int mapY(int value, int fromLow, int fromHigh, int toLow, int toHigh) {
    return (value - fromLow) * (toHigh - toLow) / (fromHigh - fromLow) + toLow;
}

void setup() {
    gamepad.begin();
}

void loop() {
    // Read gamepad state
    gamepad.read();

    // Handle dpad edge detection
    if (gamepad.dpadUp()) {
        handleDpadUp();
    } else if (gamepad.dpadDown()) {
        handleDpadDown();
    } else if (gamepad.dpadLeft()) {
        handleDpadLeft();
    } else if (gamepad.dpadRight()) {
        handleDpadRight();
    }

    // Use sprintf instead of String
    char buffer[50];
    sprintf(buffer, "Gamepad state: %d", gamepad.getState());

    // Implement millis() overflow protection
    static unsigned long lastMillis = 0;
    unsigned long currentMillis = millis();
    if (currentMillis - lastMillis >= 1000) {
        lastMillis = currentMillis;
        // Do something every second
    }
}

void handleDpadUp() {
    // Handle DPad Up action
}

void handleDpadDown() {
    // Handle DPad Down action
}

void handleDpadLeft() {
    // Handle DPad Left action
}

void handleDpadRight() {
    // Handle DPad Right action
}
