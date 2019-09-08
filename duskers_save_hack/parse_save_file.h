#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class parse_save_file {
public:
	parse_save_file();
	~parse_save_file();
	bool is_config_file_present();
	uint8_t read_config_file();
	uint8_t read_save_file_contents();
private:
	string _config_filename;
	vector<string> m_config_file_contents;
	vector<string> m_file_contents;
	uint8_t max_fuel;
	int max_scrap;
};