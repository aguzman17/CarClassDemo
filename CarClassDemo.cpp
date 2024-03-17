#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	int year;
	int speed;
	string make;
public:
	Car(int, string, int);
	void getYear(int);
	void getMake(string);
	void getSpeed(int);
	void accelerate();
	void brake();
};
Car::Car(int y, string m, int s = 0)
{
	year = y;
	make = m;
	speed = s;
}
void Car::getYear(int y)
{
	year = y;
}
void Car::getMake(string m)
{
	make = m;
}
void Car::getSpeed(int s)
{
	speed = s;
}
void Car::accelerate()
{
	speed += 5;
}
void Car::brake()
{
	if (speed > 5)
		speed -= 5;
	else speed = 0;
}

int main()
{
	int year;
	string make;
	cout << "Please enter model year: ";
	cin >> year;

	cout << "Please enter make: ";
	cin >> make;

	Car myCar(year, make);

	int speed;
	cout << "insert speed of car: ";
	cin >> speed;
	myCar.getSpeed(speed);

	for (int i = 0; i < 5; i++)
	{
		cout << "New speed is: \n";
		myCar.accelerate();
	}
	for (int j = 0; j < 5; j++)
	{
    cout << "The new speed of my car is " << endl;
		myCar.brake();
	}
	return 0;
}
