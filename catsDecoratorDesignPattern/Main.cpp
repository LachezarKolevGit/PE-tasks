#include "Cat.h"
#include "OrdinaryCat.h"
#include "PureBredCat.h"
#include "WildCat.h"


void printFunc(Cat* cat) {


	std::cout << "Result is: " << cat->print();





}
int main() {

	Cat* cat1= new OrdinaryCat("Gosho",Male);
	printFunc(cat1);
	std::cout << "\nEnd of printFunc for cat1\n";
	Cat* cat2 = new PureBredCat(BritishLonghair,cat1);
	printFunc(cat2);
	std::cout << "\nEnd of printFunc for cat2\n";
	//----------------------------
	Cat* cat3 = new OrdinaryCat("Aleksa", Female);
	Cat* cat4 = new WildCat(SouthernAfrican,cat3);
	printFunc(cat4);



	return 0;
}