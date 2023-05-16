#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream inFile("input.txt");
    std::ofstream outFile("output.txt");
    std::vector<std::string> lines;

    if (!inFile) {
        std::cerr << "Unable to open file input.txt";
        exit(1);   // call system to stop
    }

    std::string line;
    while (std::getline(inFile, line)) {
        lines.push_back(line);
    }

    std::sort(lines.begin(), lines.end());

    for (const auto& line : lines) {
        outFile << line << '\n';
    }

    return 0;
}

