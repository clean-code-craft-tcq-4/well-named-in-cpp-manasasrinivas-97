
#include <iostream>
#include <assert.h>

int main() {
    TelCoColorCoder::ColorPair  *Obj = new TelCoColorCoder::ColorPair (TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
    Obj->testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    Obj->testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    Obj->testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    Obj->testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
