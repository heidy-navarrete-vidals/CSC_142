#include <iostream>

int main() {
    int gold = 100;
    int potionCost = 10;
    int potions;

    std::cout<<"Welcome to the Potion Shop!\n";
    std::cout<<"Each healing potion costs "<<potionCost<<" gold pieces.\n";

    std::cout<<"How many potions would you like to buy? ";
    std::cin>>potions;

    int totalCost = potions * potionCost;

    if (totalCost <= gold) 
    {
        gold -= totalCost;
        std::cout<<"You bought "<<potions<<" potions for "<<totalCost<<" gold pieces.\n";
        std::cout<<"You now have "<<gold<<" gold pieces left. Have a nice adventure!\n";

    }
    else 
    {
        std::cout<<"You do not have enough gold to buy "<<potions<<" potions.\n";
        std::cout<<"You only have "<<gold<<" gold pieces.\n";
    }




    return 0;
}