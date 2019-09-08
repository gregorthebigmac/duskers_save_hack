#pragma once
#include <vector>
#include <string>

using std::vector;
using std::string;

class parse_save_file {
public:
	parse_save_file();
	~parse_save_file();
	bool is_config_file_present();
	uint8_t read_config_file();
	uint8_t read_file_contents();
private:
	string _config_filename;
	vector<string> m_file_contents;
};