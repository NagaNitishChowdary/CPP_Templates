#include <iostream>
#include <sstream>

int main() {
    std::string s = "id0,id1,id5,id3";
    std::stringstream ss(s);
    std::string token;

    while (std::getline(ss, token, ',')) {
        std::cout << token << "\n";
    }
}

int main() {
    std::string s = "id0 id1 id5 id3";

    std::stringstream ss(s);
    std::string word;

    while (ss >> word) {
        std::cout << word << "\n";
    }
}
