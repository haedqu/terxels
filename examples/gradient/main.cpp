#include "../../terxels.h"

int main()
{
    terxel::Terxture terxture(32, 32);
    for (unsigned char y = 0; y < 32; y++)
    {
        for (unsigned char x = 0; x < 32; x++)
        {
            terxture.SetPixel(x, y, {(unsigned char)(x * 4), (unsigned char)(y * 4), (unsigned char)((x + y) * 4)});
        }
    }
    terxture.Draw();
}
