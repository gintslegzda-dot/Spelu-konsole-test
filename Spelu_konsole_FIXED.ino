// Spelu_konsole_FIXED.ino

#include <GamePad.h>

// Game state
enum GameState {
    MENU,
    TETRIS,
    EXIT
};

GameState currentState = MENU;

// Initialize gamepad
GamePad gamepad;

void setup() {
    Serial.begin(9600);
    gamepad.begin();
    // Setup UI/Menu options
}

void loop() {
    switch (currentState) {
        case MENU:
            displayMenu();
            handleMenuInput();
            break;
        case TETRIS:
            playTetris();
            break;
        case EXIT:
            exitGame();
            break;
    }
}

void displayMenu() {
    // Code to display main menu
    Serial.println("1. Start Tetris\n2. Exit");
}

void handleMenuInput() {
    if (gamepad.isPressed(1)) {
        currentState = TETRIS;
    } else if (gamepad.isPressed(2)) {
        currentState = EXIT;
    }
    // Add delay or debounce logic if necessary
}

void playTetris() {
    // Tetris game logic
    // Initialize game variables, render board, etc.
    while (currentState == TETRIS) {
        // Main game loop
        updateGame();
        render();
        handleGameInput();
    }
}

void updateGame() {
    // Update game logic, piece movement, collision detection
}

void render() {
    // Render game state to display or Serial
}

void handleGameInput() {
    // Handle gamepad input for controlling Tetris pieces
}

void exitGame() {
    // Clean up and exit logic
    currentState = EXIT;
}