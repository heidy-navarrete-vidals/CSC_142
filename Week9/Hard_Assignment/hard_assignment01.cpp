#include <iostream>
#include <cstdio>

enum class CharacterClass {
    Warrior,
    Mage,
    Archer,
    Rogue
};


struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

std::string enumString(CharacterClass type) {
    switch(type) 
    {
    case CharacterClass::Warrior: return "Warrior";
    case CharacterClass::Mage: return "Mage";
    case CharacterClass::Archer: return "Archer";
    case CharacterClass::Rogue: return "Rogue";
    default:                    return "Unknown";
    }
}



int main() {
    // Array
    Character characters[4] {
        {"Aragon", CharacterClass::Warrior, 100, 170.20f},
        {"Legolas", CharacterClass::Mage, 120, 90.00f},
        {"Gandalf", CharacterClass::Archer, 85, 75.00f},
        {"Frodo", CharacterClass::Rogue, 75, 60.00f}

    };

    // Output
    std::cout<<"Characters\n--------------\n";
    for (int i = 0; i < 4; i++) {
        std::cout<<"Name: "<<characters[i].name
                 <<", \tType: "<<enumString(characters[i].type)
                 <<", \tHealth: "<<characters[i].health
                 <<", \tStrength: "<<characters[i].strength
                 <<std::endl;
    }

    // Calculations
    int sumHealth = 0;
    for (int i = 0; i < 4; i++) {
        sumHealth += characters[i].health;

    }

    float avgHealth = static_cast<float>(sumHealth / 4.0f);
    std::cout<<"Average Health: "<<avgHealth<<std::endl;

    return 0;
}