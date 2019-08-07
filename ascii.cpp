#include "ascii.hpp"

character::character(std::vector<std::string> buf){
    chara = buf;
}

std::string character::get_string(int line){
    if ((line < 0) || (line > 16)) {
        return "                ";  //16 spaces
    }
    return chara[line];
}

ascii::ascii(){
    std::string filename = "ascii_characters";
    std::ifstream read;
    read.open(filename);
    std::cout << "reading ascii characters file(" << filename << ")..." << '\n';
    std::vector<std::string> buffer;
    for (size_t i = 0; !read.eof(); i++) {
        buffer.clear();
        buffer.resize(16);
        for (size_t j = 0; j < 16; j++) {
            std::getline(read, buffer[j]);
        }
        character chara_buffer(buffer);
        data.push_back(chara_buffer);
    }
}

void ascii::cui_output(std::string sentence) {
    std::vector<int> nums;
    for (size_t i = 0; i < sentence.size(); i++) {
        nums.push_back((int)sentence[i]);
        nums[i]-=32;
    }
    std::cout << '\n';
    for (size_t i = 0; i < 16; i++) {
        for (size_t j = 0; j < nums.size(); j++) {
            std::cout << data[nums[j]].get_string(i);
        }
        std::cout << '\n';
    }
}
