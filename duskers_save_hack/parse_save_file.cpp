#include "pch.h"
#include "parse_save_file.h"

parse_save_file::parse_save_file() {
	_config_filename = "config.txt";
}

parse_save_file::~parse_save_file() {}

bool parse_save_file::is_config_file_present() {
	bool config_success = false;
	cout << "Searching working directory for " << _config_filename << "...";
	std::ifstream fin;
	fin.open(_config_filename.c_str());
	if (fin.is_open()) {
		cout << "[OK]";
		config_success = true;
		fin.close();
	}
	else {
		cout << "[FAIL]" << endl << read_config_file << " not found! Quitting..." << endl;
		config_success = false;
	}
	return config_success;
}

uint8_t parse_save_file::read_config_file() {
	uint8_t read_config_file_success = 0;	// 0 means success; all other numbers correspond to an error.
	std::ifstream fin;
	fin.open(_config_filename.c_str());
	if (fin.is_open()) {
		while (!fin.eof()) {
			string temp;
			std::getline(fin, temp);
			m_config_file_contents.push_back(temp);
		}
		for (int i = 0; i < m_config_file_contents.size(); i++) {
			
		}
	}
}

uint8_t parse_save_file::read_save_file_contents() {
	return uint8_t();
}