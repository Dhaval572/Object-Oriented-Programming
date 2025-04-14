#include <iostream>
#include <string>
using namespace std;

class BoxDrawer
{
public:

    BoxDrawer(int w, int h)
        : width(clamp(w, MIN_W, MAX_W)),
          height(clamp(h, MIN_H, MAX_H)) {}

    // Draw the complete box
    void draw() const
    {
        drawRow('+', '-', '+');

        for (size_t i = 0; i < height; ++i)
            drawRow('|', ' ', '|');

        drawRow('+', '-', '+');
    }

private:
    size_t width, height;
    static constexpr size_t MAX_W = 60, MIN_W = 2;
    static constexpr size_t MAX_H = 30, MIN_H = 1;

    // Clamp the value within [min, max] range
    static constexpr size_t clamp(int val, size_t min, size_t max)
    {
        return val < static_cast<int>(min) ? min : (val > static_cast<int>(max) ? max : val);
    }

    void drawRow(char start, char fill, char end) const
    {
        cout << start << string(width, fill) << end << '\n';
    }
};

int main()
{

    BoxDrawer(23, 55).draw();

    return 0;
}
