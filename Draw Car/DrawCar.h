#pragma once
#include <iostream>
#include <windows.h>
using namespace std;


void fixConsoleWindow();

void goToXY(int x, int y);

void textcolor(int x);

void noCursorType();

void SetWindowSize(SHORT width, SHORT height);

//**************************************************
void drawCarLeft3(int x, int y);

void drawCarRight3(int x, int y);

void drawCarLeft4(int x, int y);

void drawCarRight4(int x, int y);