#include <iostream>
#include <string>

class Gamer {
private:
    std::string username;
    int level;
    int health;

public:
    // 1. DEFAULT CONSTRUCTOR
    Gamer() {
        username = "Guest";
        level = 1;
        health = 100;
        std::cout << "[Default Constructor] Created default guest profile.\n";
    }

    // 2. PARAMETERIZED CONSTRUCTOR
    Gamer(std::string name, int lvl, int hp) 
        : username(name), level(lvl), health(hp) {
        std::cout << "[Parameterized Constructor] Created custom profile for: " << username << "\n";
    }

    // 3. CONSTRUCTOR OVERLOADING
    Gamer(std::string name) : username(name), level(1), health(100) {
        std::cout << "[Overloaded Constructor] Created starter profile for: " << username << "\n";
    }

    // 4. COPY CONSTRUCTOR
    Gamer(const Gamer& other) {
        username = other.username + "_Copy";
        level = other.level;
        health = other.health;
        std::cout << "[Copy Constructor] Cloned profile from " << other.username << "\n";
    }

    // Helper function to display our data
    void displayStats() const {
        std::cout << " -> Player: " << username << " | Level: " << level << " | HP: " << health << "\n\n";
    }
};

// --- THE MAIN FUNCTION ---
// This is exactly what MinGW needs to avoid the WinMain error!
int main() {
    std::cout << "--- Starting Constructor Demo ---\n\n";

    // 1. Triggers Default Constructor
    Gamer player1;
    player1.displayStats();

    // 2. Triggers Parameterized Constructor
    Gamer player2("ShadowBlade", 42, 85);
    player2.displayStats();

    // 3. Triggers Overloaded Constructor
    Gamer player3("NoobMaster99");
    player3.displayStats();

    // 4. Triggers Copy Constructor
    Gamer player4 = player2;
    player4.displayStats();

    return 0;
}