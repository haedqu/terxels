#include "../../terxels.h"

int main()
{
    terxel::Terxture terxture(5, 5, 6);
    terxel::Color trueColor = {20, 30, 120};

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            terxel::Color actualColor;
            float distance = abs(x - 2) + abs(y - 2);

            if (distance != 0.0f)
            {
                actualColor.r = trueColor.r * (1.0f / distance);
                actualColor.g = trueColor.g * (1.0f / distance);
                actualColor.b = trueColor.b * (1.0f / distance);
            }

            else
            {
                actualColor = trueColor;
            }

            terxture.SetPixel(x, y, actualColor);
        }
    }

    terxture.Draw();
}
