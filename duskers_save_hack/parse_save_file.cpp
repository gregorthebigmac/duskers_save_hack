#include "pch.h"
#include "parse_save_file.h"


parse_save_file::parse_save_file() {
	_config_filename = "config.txt";
}

parse_save_file::~parse_save_file() {}

bool parse_save_file::is_config_file_present() {
	return false;
}

uint8_t parse_save_file::read_config_file() {
	return uint8_t();
}

uint8_t parse_save_file::read_file_contents() {
	return uint8_t();
}
