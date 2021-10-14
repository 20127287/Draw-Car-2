#include "DrawCar.h"


void fixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}


void goToXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void textcolor(int x) {
	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, x);
}


void SetWindowSize(SHORT width, SHORT height) {
	RECT rect;
	HWND console = GetConsoleWindow();
	GetWindowRect(console, &rect);
	MoveWindow(console, rect.left, rect.top, width, height, TRUE);
}


// Hàm ẩn con trỏ
void noCursorType()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}


//************************************************************************************************
// x: Hoành độ
// y: Tung độ

void drawCarLeft3(int x, int y)
{
	goToXY(x, y);
	cout << "    _________    ";

	goToXY(x, y + 1);
	cout << " __/__|___|__" << char(92) << "__ ";

	goToXY(x, y + 2);
	cout << "/" << char(248) << "______________" << char(92);

	goToXY(x, y + 3);
	cout << char(34) << "-(o)-------(o)-'";
}


void drawCarRight3(int x, int y)
{
	goToXY(x, y);
	cout << "    _________    ";

	goToXY(x, y + 1);
	cout << " __/__|___|__" << char(92) << "__ ";

	goToXY(x, y + 2);
	cout << "/______________" << char(248) << char(92);

	goToXY(x, y + 3);
	cout << "'-(o)-------(o)-" << char(34);
}


void drawCarLeft4(int x, int y)
{
	goToXY(x, y);
	cout << "    __ _________ ";

	goToXY(x, y + 1);
	cout << " __/__|=========|";

	goToXY(x, y + 2);
	cout << "/" << char(248) << "____|_________|";

	goToXY(x, y + 3);
	cout << char(34) <<"-(o)-------(o)-'";
}


void drawCarRight4(int x, int y)
{
	goToXY(x, y);
	cout << " _________ __    ";

	goToXY(x, y + 1);
	cout << "|=========|__" << char(92) << "__ ";

	goToXY(x, y + 2);
	cout << "|_________|____" << char(248) << char(92);

	goToXY(x, y + 3);
	cout << "'-(o)-------(o)-" << char(34);
}