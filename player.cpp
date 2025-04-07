#include "player.hpp"
#include <iostream>
#include <cstring> 

//Player::Player() : name("<анонимен>"), score(0) {}

void Player::setName(char const *_name) {
    strncpy(name, _name, MAX_NAME);
    name[MAX_NAME - 1] = '\0';
}

Player::Player(char const* _name, unsigned _score) : score(_score) {
    setName(_name);
}

void Player::print() {
    std::cout << "Играч на име " << name << " има " << score << " точки " << std::endl;
}

Player::Player(Player const& other) : score(other.score) {
    setName(other.name);
    strncat(name, " (копие)", MAX_NAME - strlen(name));
    name[MAX_NAME - 1] = '\0';    
}