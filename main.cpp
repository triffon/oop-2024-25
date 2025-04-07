#include <iostream>
#include "player.hpp"

int main(int, char**){
    Player gandalf("Гандалф Сивия", 30);
    Player anonymous;
    Player frodo = "Фродо"; // Player frodo("Фродо");
    gandalf.print();
    anonymous.print();
    frodo.print();
    return 0;
}
