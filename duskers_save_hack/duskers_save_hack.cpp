#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	std::ifstream fin;
	vector<string> file_contents;
	fin.open("universedata.txt");
	if (fin.is_open()) {
		cout << "universedata.txt has been located. Reading file...";
		while (!fin.eof()) {
			string line;
			std::getline(fin, line);
			file_contents.push_back(line);
		}
		fin.close();
		cout << "[OK]" << endl;
		cout << endl << "Dumping file contents..." << endl;
		for (int i = 0; i < file_contents.size(); i++) {
			cout << file_contents[i] << endl;
		}
		cout << endl << endl;
		cout << "[END OF FILE]" << endl;
		return 0;
	}
	else {
		cout << "universedata.txt not found!" << endl;
		return 1;
	}
	return 0;
}