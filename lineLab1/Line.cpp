#include "Line.h"

Line::Line(int lineLenght) {
	std::cout << "Enter length of line"<<std::endl;
	std::cin >> lineLenght;
	len=lineLenght;
	for (int i = 0; i < lineLenght; i++)
	{
		std::cout <<"*" ;
	}



}
Line::~Line() {
	system("CLS");
	std::cout << "destructor";


}