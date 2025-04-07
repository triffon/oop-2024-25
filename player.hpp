#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
private:
    // име на играча
    char* name;

    // точки на играча
    unsigned score;

public:
    // конструкнори
//   Player();
   Player(char const* _name = "<анонимен>", unsigned _score = 0);
   Player(Player const& other);// = delete;

    void print();

    // задаване на име на играча
    void setName(char const* _name, char const* _suffix = "");

};

#endif // PLAYER_HPP