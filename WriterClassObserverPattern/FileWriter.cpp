#include "FileWriter.h"
#include <fstream>
void FileWriter::write(const std::string &data) {

	std::cout << "\nSaving data in file\n";
	std::ofstream out("output.txt");
	out << data;
	out.close();



}
FileWriter::FileWriter(UserInputHandler *userInputHandler):userInputHandler_(userInputHandler) {
	userInputHandler->Attach(this);


}

