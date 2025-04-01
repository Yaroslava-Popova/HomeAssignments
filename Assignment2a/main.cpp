/* Popova Yaroslava
st132757@student.spbu.ru
*/

#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    std::ifstream inputStream("inputfile.bin", std::ios::binary);
    std::ofstream outputStream("outputfile.bin", std::ios::binary);

    std::size_t sizeOfFile = std::filesystem::file_size("inputfile.bin");

    auto* dataBuffer = new char[sizeOfFile];
    inputStream.read(dataBuffer, sizeOfFile);

    for (std::size_t pos = 0; pos < sizeOfFile / 2; ++pos) {
        std::swap(dataBuffer[pos], dataBuffer[sizeOfFile - pos - 1]);
    }

    outputStream.write(dataBuffer, sizeOfFile);

    inputStream.close();
    outputStream.close();
    delete[] dataBuffer;

    return 0;
}
