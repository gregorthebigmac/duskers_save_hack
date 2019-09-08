#pragma once
#include <vector>
#include <string>

using std::vector;
using std::string;

class parse_save_file {
public:
	parse_save_file();
	~parse_save_file();
private:
	vector<string> m_file_contents;
};

