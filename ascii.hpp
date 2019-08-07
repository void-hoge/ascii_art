#pragma once
#include <vector>
#include <iostream>
#include <fstream>

class character {
private:
    std::vector<std::string> chara;
public:
    character(std::vector<std::string> chara);
    std::string get_string(int line);
};

class ascii {
private:
    std::vector<character> data;
public:
    ascii();
    void cui_output(std::string sentence);
};
