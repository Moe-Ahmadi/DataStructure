/*
 * Lesson1.cpp
 *
 *  Created on: Feb 5, 2021
 *      Author: amohamadreza2113
 */
#include <iostream>
#include <fstream>
using namespace std;

int globalValue = 10;

void conditionTest();  //this is declaration  for condition test.
void globalTest(); //this is declaration for global test.
void helloWorldTest(); //this is declaration for hello world test.
void specialCharTest();
void stringTest();
void testOfStr();
void cinTest();
void streamTest();

int main() {
	//conditionTest();
	//globalTest();
	//helloWorldTest();
	//specialCharTest();
	//stringTest();
	//testOfStr();
	//cinTest();
	streamTest();


	return 0;

}
void conditionTest() {   // this is implementation of condition test.
	cout << "please enter your number";
	int a;
	cin>>a;
	if(a > 0) {
		cout <<"it is positive"<<endl;
	}else if(a < 0) {
		cout <<"it is negative"<<endl;
	}else{
		cout <<"it is zero" <<endl;
	}


}
void globalTest() { //this is implementation of condition.
	cout <<"this is global value: " <<globalValue <<endl;

}
void helloWorldTest() { //this is implementation of conditions.
	int age;
		int idNumber;
		cout <<"Please enter your age: ";
		cin >>age;
		cout <<"Please enter you id number: ";
		cin >>idNumber;
		cout << "the age is: " <<age <<"\n"<<"the id number is:" <<idNumber;

}
void specialCharTest() {
	cout << "i am using \"double quote\" to practice"<<endl;
	cout <<"Id\t"<<"Name\t"<<"Department\t"<<"school";


}
void stringTest() {
char str[] = "welcome to my world";
char firstChar = 'm';
cout.write(str, 6)<<endl;

cout.put(firstChar);


}
void testOfStr(){
char str[] = "tonight is the game";
char firstCharacter = 't';
cout.write(str, 5)<<endl;

cout.put(firstCharacter);
}
void cinTest() {
char name[20], address[20];
char buff[10];
cout << "Name: ";
cin.getline(name, 20);
cout << "Address: ";
cin.getline(address, 20);
cin.get(buff, 5);
cout << "Insert characters in buffer: ";
cout << buff;
}
void streamTest() {
ofstream file;
file.open ("sample.txt");
file << "Welcome to class" <<endl;
file << "C++ for Java Programmers! ";
cout << "success...";
file.close();
}

