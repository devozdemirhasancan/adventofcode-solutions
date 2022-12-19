
#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <algorithm>  

using namespace std;

int main()
{
	ifstream file("veri.txt");
	list<int> items;
	int current = 0;
	int group_max = 0;
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			if (line == "") {


				if (current > group_max) {
					group_max = current;
				}
				items.push_back(current);
				current = 0;
			}
			else {
				current += stoi(line);
			}
		}
		cout <<"Max item in the list: " << *max_element(items.begin(), items.end()) << endl;

		items.sort();
		items.reverse();
		int c = 0;
		int total = 0;
		for (int n : items) {
			c++;
			if (c == 4) {
				break;
			}
			else {
				total += n;
			}
		}
		cout <<"Sum of first 3 item: "<< total << endl;
	}
}
