#include "DrawCar.h"
#define SCREEN_WIDTH 1200
#define SCREEN_HEIGHT 700


void main()
{
	SetWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	fixConsoleWindow();
	noCursorType();

	for (int i = 0; i != 4100; i++)
		cout << "A";

	drawCarLeft3(20, 2);

	drawCarRight3(20, 8);

	drawCarLeft4(20, 14);

	drawCarRight4(20, 20);

	goToXY(0, 30);
}