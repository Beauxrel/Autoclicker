#include <iostream>
#include <Windows.h>

using namespace std;

void menu() {
	cout << "Hit X to start the autoclicker and Y to stop the Autoclicker" << endl;
}

void clicker() {
	bool click = false;

	while (true) {
		if (GetAsyncKeyState('X')) {
			click = true;
		}
		else if (GetAsyncKeyState('Z')) {
			click = false;
		}
		if (click == true) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(10);
		}
	}
}

int main() {
	menu();
	clicker();
	return 0;
}

