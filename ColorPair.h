#ifndef ColorPair__H___
#define ColorPair__H___
#include <string>
#include <iostream>
#include <assert.h>
namespace TelCoColorCoder
{   
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
    };
            ColorPair GetColorFromPairNumber(int pairNumber);
            int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
#endif //ColorPair__H___
