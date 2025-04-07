#include <iostream>
#include "player.hpp"

void anonymousPrint(Player player) {
    //player.print();
    player.setName("Анонимен");
    player.print();
}

int main(int, char**){
    Player gandalf("Гандалф Сивия", 30);
    Player anonymous;
    Player frodo = "Фродо"; // Player frodo("Фродо");
    Player gandalf2(gandalf);// = Player(gandalf);
    gandalf.print();
    anonymous.print();
    frodo.print();
    gandalf2.print();
    gandalf2.setName("Гандалф Белия");
    gandalf2.print();
    anonymousPrint(gandalf2);    
    return 0;
}
