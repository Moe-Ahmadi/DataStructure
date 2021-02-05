/*
 * Lesson1.cpp
 *
 *  Created on: Feb 5, 2021
 *      Author: amohamadreza2113
 */
#include <iostream>
using namespace std;

int globalValue = 10;

void conditionTest();  //this is declaration  for condition test.
void globalTest(); //this is declaration for global test.
void helloWorldTest(); //this is declaration for hello world test.
void specialCharTest();
int main() {
	//conditionTest();
	//globalTest();
	//helloWorldTest();
	specialCharTest();


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
	cout <<"\tI\t"<<"Name\t"<<"Dept\t"<<"school";


}



