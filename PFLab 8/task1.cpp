#include <iostream>
using namespace std;

bool doesBrickFit (int brickheight, int brickwidth, int brickdepth, int holewidth, int holeheight);

main ()
{
    int brickheight;
    int brickwidth;
    int brickdepth;
    int holewidth;
    int holeheight;

    cout <<"Enter Height of Brick: ";
    cin >> brickheight;
    cout <<"Enter Width of Brick: ";
    cin >> brickwidth;
    cout <<"Enter Depth of Brick: ";
    cin >> brickdepth;
    cout <<"Enter Width of Hole: ";
    cin >> holewidth;
    cout <<"Enter Height of Hole: ";
    cin >> holeheight;

    cout << doesBrickFit (brickheight, brickwidth, brickdepth, holewidth, holeheight);
}

bool doesBrickFit (int brickheight, int brickwidth, int brickdepth, int holewidth, int holeheight)
{
    if ((brickheight == holeheight && brickwidth == holewidth) || (brickwidth == holeheight && brickheight == holewidth))
    {
        return true;
    }
    else if ((brickdepth == holeheight && brickwidth == holewidth) || (brickwidth == holeheight && brickdepth == holewidth))
    {
        return true;
    }
    else if ((brickheight == holeheight && brickdepth == holewidth) || (brickdepth == holeheight && brickheight == holewidth))
    {
        return true;
    }
    else
    {
        return false;
    }
}