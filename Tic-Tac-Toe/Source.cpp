#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

const int rows = 3, columns = 3;
char field[rows][columns] = {
	{' ', ' ', ' '},
	{' ', ' ', ' '},
	{' ', ' ', ' '}
};
int turn = 1;

void goX();
void go0();

bool check_victoryX();
bool check_victoryY();

void save();
void load();

bool file_exists(string path);

void print_map();

int main() {
	setlocale(LC_ALL, "Russian");

	int n;

	cout << "MAIN\n\nHey! Welcome to TIC-TAC-TOE!\n\nChoose an item:\n\n"
		 << "Start the game (1)\n\n"
		 << "Load game (2)\n\n"
		 << "Quit the game (3)\n\n";
	cin >> n;
	switch (n) {
	case 1: cout << "LET'S GO!"; break;
	case 2: cout << "Choose the saved game ->";
	case 3: return 0;
	}
	
	
	

	return 0;
}