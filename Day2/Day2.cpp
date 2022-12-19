#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <algorithm>   
#include <map>
using namespace std;
void task1();

void task2();
int main()
{
	task2();
}

void task1() {
	string computer[2][3] = {
	{ "A", "B", "C" },
	{ "0", "1", "2" },
	};
	string player[2][3] = {
	{ "X", "Y", "Z" },
	{ "0", "1", "2" }
	};
	ifstream file("veri.txt");
	if (file.is_open()) {
		string line;
		int point = 0;
		int _computer = 0; //computer
		int _player = 0; //player2
		while (getline(file, line)) {
			string a = line.substr(0, 1);
			string b = line.substr(2, 1);

			for (int i = 0; i < 3; i++) {
				if (computer[0][i] == a) { _computer = i; break; }
			}
			for (int i = 0; i < 3; i++) {
				if (player[0][i] == b) { _player = i; break; }
			}
			if ((_computer + 1) % 3 == _player) {
				point += ((_player + 1) + 6);
				//cout << "Player win" << endl;
			}
			else if ((_player + 1) % 3 == _computer) {
				point += ((_player + 1) + 0);
				//cout << "Computer win" << endl;
			}
			else {
				point += ((_player + 1) + 3);
				//cout << "Draw" << endl;
			}
		}
		cout << point << endl;
	}
}

void task2() {
	ifstream file("veri.txt");
	if (file.is_open()) {
		string line;
		int point = 0;
		while (getline(file, line)) {
			char computer = line.substr(0, 1)[0];
			computer -= 'A';
			char player = line.substr(2, 1)[0];
			player -= 'X';
			
			if (player == 2) 
				player = (computer + 1) % 3 + 6;
			else if (player == 0)
				player = (computer + 2) % 3 + 0;
			else
				player = computer + 3;

			point += player + 1;
		}
		cout << point << endl;
	}
}

