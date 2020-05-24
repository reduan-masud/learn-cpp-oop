#include <bits/stdc++.h>
using namespace std;

class MyClass{ //The class
	public: //access specifier
		int myNum; //Attribute (int variable)
		string myString; //Attribute (string variable)

};

int main()
{
	MyClass myObj;  //Creat an object of MyClass

	//Accesss attributes and set Values
	myObj.myNum = 15;
	myObj.myString = "Some Text";

	//Print attributes value
	cout<<myObj.myNum<<endl;
	cout<<myObj.myString<<endl;
return 0;
}
