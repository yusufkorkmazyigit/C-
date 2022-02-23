#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	string name = "";
	int age;
	string place = "";
	
	cout << "Please input your name \n";
	getline(cin,name);
	cout << "Please input your age \n";
	cin >> age;
	cout << "Where are you from? \n";
	getline(cin,place);
	cout << "User Info \n";
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << "\n";
	cout << "User is from: " << place << "\n";
	
	getch();
	return 0;	
	
}
