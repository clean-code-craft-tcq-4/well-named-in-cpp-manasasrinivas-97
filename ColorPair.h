#ifndef ColorPair__H___
#define ColorPair__H___
#include <string>
#include <iostream>
#include <assert.h>

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
            ColorPair GetColorFromPairNumber(int pairNumber);
            void testNumberToPair(int pairNumber,
                TelCoColorCoder::MajorColor expectedMajor,
                TelCoColorCoder::MinorColor expectedMinor);
            void testPairToNumber(TelCoColorCoder::MajorColor major,
                TelCoColorCoder::MinorColor minor,
                int expectedPairNumber);
};
#endif //ColorPair__H___
