#include <iostream>

class GameObject {
public:
    virtual void update() = 0;
    virtual ~GameObject() {}
};

class Player : public GameObject {
public:
    void update() { std::cout << "Updating Player\n"; }
    void attack() { std::cout << "Player Attacks!\n"; }
};

class Enemy : public GameObject {
public:
    void update() { std::cout << "Updating Enemy\n"; }
};

void checkCollisions(GameObject* obj) {
    if (Player* player = dynamic_cast<Player*>(obj)) {
        std::cout << "Collision with Player detected.\n";
        player->attack();
    } else {
        std::cout << "Collision with non-player object.\n";
    }
}

int main() {

    GameObject *player = new Player();
    GameObject *enemy = new Enemy();

    checkCollisions(player);
    checkCollisions(enemy);

    delete player;
    delete enemy;

    std::cout << "done!\n";
    return (0);
}