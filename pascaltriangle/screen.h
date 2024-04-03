#pragma once
enum COLORS {
	BLACK=30,
	RED,
	YELLOW,
	GREEN,
	BLUE,
	CYAN
};
void setFGcolor(int);
void clearScreen(void);
void gotoXY(int, int);
void resetColors(void);