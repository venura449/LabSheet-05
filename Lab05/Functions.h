#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
const float pi = static_cast<float>(22) / 7;

using namespace std;


struct Circle {
	float radius;
	float Circle_Area;

};

struct Square {
	float length;
	float Square_Area;
};

struct Rectangle {
	float length;
	float width;
	float rec_Area;
	float perirec;
};


void Circle_Area(float radius, float& Circle_Area) {
	Circle_Area = pi * pow(radius, 2);
}

void Square_Area(float length, float& Square_Area) {
	Square_Area = pow(length, 2);
}

void Rectangle_Area(float length, float width, float& rec_Area) {
	rec_Area = length * width;
}
void Main_perimiter(float length, float width, float& perirec) {
	perirec = 2 * (length)+2 * (width);
}
float build_cost(float perirec) {
	float cost_meter;
	cout << "Enter Cost per meter :";
	cin >> cost_meter;
	return cost_meter * perirec;
}