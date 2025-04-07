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

    size_t const N = 5;
    Player players[N] = { gandalf, frodo, Player("Марио", 25), "Луиджи" };
    for(int i = 0; i < N; i++)
        players[i].print();


    int* a = new int[100];
    delete[] a;

    Player* morePlayers = new Player[N]{ players[2], frodo };
    for(int i = 0; i < N; i++)
        morePlayers[i].print(); 



    // !!! delete morePlayers;
    delete[] morePlayers;
    return 0;
}
