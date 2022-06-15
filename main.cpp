
#include <iostream>
#include <assert.h>
#include "ColorPair.h"
namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}
int main() {
    TelCoColorCoder::ColorPair  *Obj = new TelCoColorCoder::ColorPair (TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
    Obj->testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    Obj->testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    Obj->testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    Obj->testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
