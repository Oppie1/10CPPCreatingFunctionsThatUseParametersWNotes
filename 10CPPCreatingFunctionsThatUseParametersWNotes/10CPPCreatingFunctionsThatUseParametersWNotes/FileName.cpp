#include <iostream>
using namespace std;

void printCrap(int x) { //We use void becuase this does not return anything. It gets sent to main and that is it.
	//Main is where the program is run from in this "void" Situation
	//Whever we use a parameter we put the information here. It is looking for int x
	//It needs one integer in order to work.  Remember top down
	cout << "buckys favortie number is " << x << endl; //This function is called fully from top
	//Nothing is returned and the program is not "run" from a return value here. Nothing comes back 
}

int main()
{
	printCrap(3); //In order to use this method we need one integer.

	return 0;
}

//Whenever making parameters you need to list what type of data and variable name (int and x)
//So in this situation main gets the sentence from void printCrap and prints it to the screen
//Without void means it returns something back to main. Main asks for it, it does a calculation and
//retuns its own value.
