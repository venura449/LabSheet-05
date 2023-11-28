#include "Functions.h"


//Main Function
int main() {
	Circle cir1;
	Square sq1;
	Rectangle rec1,recmain;

	//Assiging Variables
	cir1.radius = 5;
	sq1.length = 4;
	rec1.length = 7;
	rec1.width = 3;

	//Dimensions of full garden
	recmain.length = 28;
	recmain.width = 15;

	//Calculating Area
	Circle_Area(cir1.radius,cir1.Circle_Area);
	Square_Area(sq1.length, sq1.Square_Area);
	Rectangle_Area(rec1.length, rec1.width, rec1.rec_Area);
	Main_perimiter(recmain.length, recmain.width, recmain.perirec);

	//printing part
	float final_Area = ((recmain.length * recmain.width) - (cir1.Circle_Area + sq1.Square_Area + rec1.rec_Area));
	cout << "Area of the Green Area is :" << fixed << setprecision(3) << final_Area << endl;
	cout << "Total Cost for Fence is :" << fixed << setprecision(3) << build_cost(recmain.perirec) << endl;


}

