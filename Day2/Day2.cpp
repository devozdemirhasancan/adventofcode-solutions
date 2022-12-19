#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <algorithm>   
using namespace std;
//A X Taş
//B Y KAĞIT
//C Z MAKAS
#define TAŞ A
#define KAĞIT B
#define MAKAS C

#define _TAŞ X
#define _KAĞIT Y
#define _MAKAS Z
int main()
{
	string computer[2][3] = {
	{ "A", "B", "C" },
	{ "0", "1", "2" },
	};
	string player2[2][3] = {
	{ "X", "Y", "Z" },
	{ "0", "1", "2" }
	};
	ifstream file("veri.txt");
	if (file.is_open()) {
		string line;
		int point = 0;
		while (getline(file, line)) {
			string a = line.substr(0, 1);
			string b = line.substr(2, 1);
			
				
			for (int i = 0; i < 3; i++) {
				
				if (computer[0][i] == a && player2[0][i]==b) {
					
					
					/*
					if (((stoi(player2[1][i])+1 % 3)) == stoi(computer[1][i])) {
						cout << "Player 2 won" << endl;
					}
					else if (((stoi(computer[1][i])+1 % 3) ) == stoi(player2[1][i])) {
						cout << "Player 1 won" << endl;
					}
					else {
						cout << "Draw" << endl;
					}*/
					

					/*if ((_player2 + 1 >= 2 ? 0 : _player2 + 1) % 3 == _computer) { //computer win
						point += (1 + _player2+1);
					}
					else if((_computer +1 >= 2 ? 0 : _computer + 1) % 3==_player2) { //player 2 win
						point += (6 + _player2+1);
					}
					else { //draw
						point += _player2+1;
					}*/
				}
			}
			
			//cout << a << " - " << b << endl;
		}
		cout << point << endl;
	}
}

