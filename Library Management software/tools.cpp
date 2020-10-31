#include"allheader.h"

void tools::Color(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void tools::setxy(int x, int y) {
	
	c.X = x; c.Y = y; // Set X and Y coordinates
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void tools::displayhorizontal(int total, int ascii){
	char c = ascii;
	int i;
	for (i = 1; i < total; i++)
	{
		cout << c;
	}
}
void tools::displayvertical(int posx,int posy1, int posy2,int ascii)
{
	tools l;
	char c = ascii;
	int i;
	for (i = posy1; i <=posy2; i++) {
		l.setxy(posx, i);
		cout << c;
	}
}
//void tools::background() {
//	SystemParametersInfo( SPI_SETDESKWALLPAPER, 30, "fwsd.jpg", 120);
//}
int tools::bookcounter() {
	fstream fp2;
	book bok;
	fp2.open("book.txt", ios::in);
	count = 0;
	while (!fp2.eof()) {
		while (fp2.read(reinterpret_cast<char*>(&bok), sizeof(book))) {
			count++;
		}
	}
	return count;
}

int tools::studentcounter() {
	fstream fp2;
	student o;
	fp2.open("student.txt", ios::in);
	while (!fp2.eof()) {
		while (fp2.read(reinterpret_cast<char*>(&o), sizeof(student))) {
			count++;
		}
	}
	return count;
}

