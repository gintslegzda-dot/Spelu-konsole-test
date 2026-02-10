#include <Gamepad.h>

// Definitions -->

// Game state management
enum GameState { MENU, PLAY, EXIT };
GameState currentState = MENU;

// Gamepad setup -->
Gamepad gamepad;

// D-pad input handling -->
bool dpadState[4] = { false, false, false, false }; // Up, Down, Left, Right
const int edgeDetectionThreshold = 100; // adjust based on requirements

void setup() {
    // Initialize gamepad
}

void loop() {
    handleInputs();
    switch (currentState) {
        case MENU:
            showMenu();
            break;
        case PLAY:
            playGame();
            break;
        case EXIT:
            // Clean up and exit
            break;
    }
}

void handleInputs() {
    // Check gamepad states
    gamepad.update();
    
    // D-pad edge detection
    int currentDpadState = gamepad.getDpadState(); // hypothetical function
    if (currentDpadState != previousDpadState) {
        // Process input without continuous action
        previousDpadState = currentDpadState;
        // Handle input based on state
    }
}

void showMenu() {
    // Display menu options and handle input
}

void playGame() {
    // Main game loop
}

// Additional functions and logic...