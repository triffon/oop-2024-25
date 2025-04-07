#ifndef PLAYER_HPP
#define PLAYER_HPP

#define MAX_NAME 64

class Player {
private:
    // име на играча
    char name[MAX_NAME];

    // точки на играча
    unsigned score;

public:
    // конструкнори
//   Player();
   Player(char const* _name = "<анонимен>", unsigned _score = 0);
   Player(Player const& other);

    void print();
};

#endif // PLAYER_HPP