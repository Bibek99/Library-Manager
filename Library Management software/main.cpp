#include "Headers.h"

int main() {
	system("MODE CON COLS=120 LINES=30"); //Size of console
	loading lib;
	tools y;
	y.fontsize(10, 20);
	lib.load();							  //Everything in here
	(void)_getch();
}