#include "ColorPair.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

MajorColor TelCoColorCoder::ColorPair::getMajor() {
	return majorColor;
}

MinorColor TelCoColorCoder::ColorPair::getMinor() {
	return minorColor;
}


TelCoColorCoder::ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
int TelCoColorCoder::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

