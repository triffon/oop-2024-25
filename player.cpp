#include "player.hpp"
#include <iostream>
#include <cstring> 

//Player::Player() : name("<анонимен>"), score(0) {}

void Player::setName(char const *_name, char const *_suffix) {
    delete[] name;
    name = new char[strlen(_name) + strlen(_suffix) + 1];
    strcpy(name, _name);
    strcat(name, _suffix);
}

Player::Player(char const* _name, unsigned _score) : name(nullptr), score(_score) {
    setName(_name);
}

void Player::print() {
    std::cout << "Играч на име " << name << " има " << score << " точки " << std::endl;
}

Player::Player(Player const& other) : name(nullptr), score(other.score) {
    setName(other.name, " (копие)");
}

Player::~Player() {
    std::cerr << "ВНИМАНИЕ! " << name << " умира..." << std::endl;
    delete[] name; 
}