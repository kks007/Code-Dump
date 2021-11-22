#include <iostream>
using namespace std;

class Player
{
public:
    int x,y;
    int speed;

    void Move (int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

int main()
{
    
    Player player;

    player.x = 5;
    player.Move(4,5);

}