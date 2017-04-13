#include <iostream>
using namespace std;
#include <string>
#include <Windows.h>
int main() {
	string items[5];
	string input;
	cout << "Would you like to pick up a magic sword" << endl;
	getline(cin, input);
	if (input.compare("yes") == 0) {
		cout << "You picked up the sword" << endl;
		items[0] = "Magic Sword";
		PlaySound(TEXT("Metal.wav"), NULL, SND_FILENAME);
	}
	else if (input.compare("no") == 0) {
		cout << "You Die" << endl;
		PlaySound(TEXT("Dying.wav"), NULL, SND_FILENAME);
	}
}