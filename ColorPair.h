#ifndef ColorPair__H___
#define ColorPair__H___
#include <string>
#include <iostream>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
namespace TelCoColorCoder
{   
    
    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();

    };
            ColorPair GetColorFromPairNumber(int pairNumber);
            int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
#endif //ColorPair__H___
