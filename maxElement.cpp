#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{

    const int arraySize = 100;

    int myArray[arraySize];
    int max = 0;
 
    for(int i = 0; i < arraySize; ++i)
    {
        myArray[i] = rand();
 
        cout << myArray[i] << endl;
        max = myArray[0];
        if(myArray[i] > max)
			max = myArray[i];
    }
	cout << "\nHigh: " << max << "\n\n";
	return 0;
}
