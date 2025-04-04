#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice(int sides)
{
    return (rand() % sides) + 1;
}

int main() {
    srand(time(0));

    int heroHP = 20;
    int heroAC = 15;
    int goblinHP = 10;
    int goblinAC = 12;

    std::cout<<"Combat begins between Hero and Goblin!\n";

    // Hero
    while (heroHP > 0 && goblinHP > 0)
    {
        std::cout<<"--- Hero's Turn ---\n";
        int heroRoll = rollDice(20);
        std::cout<<"Hero rolls a "<<heroRoll;

        if (heroRoll >= goblinAC)
        {
            int heroDamage = rollDice(8);
            goblinHP -= heroDamage;
            std::cout<<" and hits the Goblin!\n";
            std::cout<<"Hero deals "<<heroDamage<<" damage.\n";
            std::cout<<"Goblin has "<<(goblinHP > 0 ? goblinHP : 0)<<" HP remaining.\n";
    
        }

        else
        {
            std::cout<<" and misses!\n";
        }

        if (goblinHP <= 0) break;


        // Goblin
        std::cout<<"--- Goblin's Turn ---\n";
        int goblinRoll = rollDice(20);
        std::cout<<"Goblin rolls a "<<heroRoll;

        if (goblinRoll >= heroAC)
        {
            int goblinDamage = rollDice(8);
            heroHP -= goblinDamage;
            std::cout<<" and hits the Hero!\n";
            std::cout<<"Goblin deals "<<goblinDamage<<" damage.\n";
            std::cout<<"Hero has "<<(heroHP > 0 ? heroHP : 0)<<" HP remaining.\n";
        }
        else
        {
            std::cout<<" and misses!\n";
        }

    }

    if (heroHP > 0)
    {
        std::cout<<"Goblin is defeated! Hero winds the battle!\n";

    }
    else
    {
        std::cout<<"Hero has fallen! Goblin wins the battle!\n";
    }


    return 0;
}