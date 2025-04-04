#include <iostream>


// Functions
void drinkPotion(int& HP, int heal)
{
    HP += heal;

}

void damageHero(int* HP, int damage)
{
    *HP -= damage;
}


int main() {
    // Declarations
    int initialHP = 20;


    // Output
    std::cout<<"Hero's starting HP: "<<initialHP<<std::endl;
    std::cout<<"Hero drinks a healing potion (+5) HP."<<std::endl;
    drinkPotion(initialHP, 5);
    std::cout<<"Hero's current HP: "<<initialHP<<std::endl;
    std::cout<<"Hero takes damage from a witch (-8) HP."<<std::endl;
    damageHero(&initialHP, 8);
    std::cout<<"Hero's current HP: "<<initialHP<<std::endl;


    return 0;
}