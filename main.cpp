#include <iostream>
using namespace std;

class Color
{
private:
    int red;
    int green;
    int blue;

public:
    Color()
    {
        red = 0;
        green = 0;
        blue = 0;
    }

    Color(int r, int g, int b)
    {
        red = r;
        green = g;
        blue = b;
    }

    Color(int r, int g)
    {
        red = r;
        green = g;
        blue = 0;
    }

    void setRed(int r)
    {
        red = r;
    }

    void setGreen(int g)
    {
        green = g;
    }

    void setBlue(int b)
    {
        blue = b;
    }

    int getRed()
    {
        return red;
    }

    int getGreen()
    {
        return green;
    }

    int getBlue()
    {
        return blue;
    }

    void print()
    {
        cout << "Red: " << red
             << ", Green: " << green
             << ", Blue: " << blue << endl;
    }
};

int main()
{
    Color color1;
    Color color2(0, 150, 255);
    Color color3(80, 200);

    cout << "Color Values" << endl;
    cout << "------------" << endl;

    cout << "Color 1: ";
    color1.print();

    cout << "Color 2: ";
    color2.print();

    cout << "Color 3: ";
    color3.print();

    return 0;
}