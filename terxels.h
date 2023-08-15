#pragma once

#include <vector>
#include <iostream>
#include <stdio.h>

namespace terxel
{
    class Color
    {
        public:
            unsigned char r = 0;
            unsigned char g = 0;
            unsigned char b = 0;

            bool enabled = false;
    };

    class Terxel
    {
        public:
            Terxel()
            {

            }

            Terxel(Color first, Color second)
            {
                top = first;
                bottom = second;
            }

            void Draw()
            {
                unsigned char c;

                if (!bottom.enabled && !top.enabled)
                {
                    printf(" ");
                }

                else if (!bottom.enabled)
                {
                    printf("\033[48;5;0;38;2;%d;%d;%dm▀", top.r, top.g, top.b);
                }

                else if (!top.enabled)
                {
                    printf("\033[38;2;%d;%d;%d;48;5;0m▄", bottom.r, bottom.g, bottom.b);
                }

                else
                {
                    printf("\033[38;2;%d;%d;%d;48;2;%d;%d;%dm▄", bottom.r, bottom.g, bottom.b, top.r, top.g, top.b);
                }
            }

        public:
            Color top;
            Color bottom;
    };

    class Terxture
    {
        public:
            Terxture(int width, int height)
                :
                    width(width),
                    height((int)((float)height / 2.0f + 0.5f)),
                    terxels(this->width * this->height)
        {
        }

            void SetPixel(int x, int y, Color color)
            {
                if (y % 2 == 0)
                {
                    terxels[y / 2 * width + x].top = color;
                    terxels[y / 2 * width + x].top.enabled = true;
                }

                else
                {
                    terxels[y / 2 * width + x].bottom = color;
                    terxels[y / 2 * width + x].bottom.enabled = true;
                }
            }

            void Draw()
            {
                for (int y = 0; y < height; y++)
                {
                    for (int x = 0; x < width; x++)
                    {
                        terxels[y * width + x].Draw();
                    }

                    printf("\n");
                }

                printf("\033[39;m");
                printf("\033[49;m");
            }

        private:
            const int width;
            const int height;
            std::vector<Terxel> terxels;
    };
}
