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
    //Player gandalf2(gandalf);// = Player(gandalf);
    Player* pGandalf2 = new Player(gandalf);
    gandalf.print();
    anonymous.print();
    frodo.print();
    pGandalf2->print();
    pGandalf2->setName("Гандалф Белия");
    gandalf.print();
    pGandalf2->print();
    anonymousPrint(*pGandalf2);
    gandalf.print();
    pGandalf2->print();
    Player("Катнис Евърдийн", 50).print();
    delete pGandalf2;

    return 0;
}
