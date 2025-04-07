#include "player.hpp"
#include <iostream>
#include <cstring> 

//Player::Player() : name("<анонимен>"), score(0) {}

Player::Player(char const* _name, unsigned _score) : score(_score) {
    strncpy(name, _name, MAX_NAME);
    name[MAX_NAME - 1] = '\0';
}

void Player::print() {
    std::cout << "Играч на име " << name << " има " << score << " точки " << std::endl;
}