#include <iostream>
using namespace std;

void printCrap(int x) { //Whever we use a parapeter we put the information here. It is looking for int x
	//It needs one integer in order to work.  Remember top down
	cout << "buckys favortie number is " << x << endl; //This function is called fully from top
	//It is not a protorype.  It is providing the sentence. In main when 
}

int main()
{
	printCrap(3); //In order to use this method we need one integer.

	return 0;
}

//Whenever making parameters you need to list what type of data and variable kname (int and x)