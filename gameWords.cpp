#include <iostream>

using namespace std;

const int HEIGHT = 10;
const int WIDTH = 10;

int px = 0;
int py = 0;

char map[HEIGHT][WIDTH] = {
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
    {'-', '-', '#', '#', '-', '-', '#', '#', '-', '-'},
};

void drawMap()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}

void setPlayer(int x, int y)
{
    if (map[x][y] != '@')
    {
        map[x][y] = '@';
    }
}

int main()
{
    setPlayer(2, 3);
    while (true)
    {
        drawMap();
        char pos;
        cin >> pos;
        if (pos == 'w')
        {
            setPlayer(1, -1);
        }
        else if (pos == 's')
        {
            setPlayer(0, 1);
        }
        else if (pos == 'a')
        {
            setPlayer(1, 0);
        }
        else if (pos == 'd')
        {
            setPlayer(-1, 0);
        }
    }
}