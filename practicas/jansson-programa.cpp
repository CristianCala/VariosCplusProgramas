// #include <iostream>
#include <fstream>
#include <json/value.h>

using namespace std;



int main(){

	std::ifstream people_file("https://s3.amazonaws.com/dolartoday/data.json", std::ifstream::binary);
	people_file >> USD;
	cout<<people; //This will print the entire json object.


}