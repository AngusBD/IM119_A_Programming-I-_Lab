#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double input = 0, count = 0, gpa_sum = 0;
	int inputInt;
	// infinite loop
	while (cin >> input)
	{	
		// cout << input;
		inputInt = input;
		switch (inputInt/10)
		{
		case 10: case 9: case 8:
			cout << "A, GPA is 4";
			count++;
			gpa_sum+=4;
			break;
		case 7:
			cout << "B, GPA is 3";
			count++;
			gpa_sum+=3;
			break;
		case 6:
			cout << "C, GPA is 2";
			count++;
			gpa_sum+=3;
			break;
		case 5:
			cout << "D, GPA is 1";
			count++;
			gpa_sum+=3;
			break;
		case 4: case 3: case 2: case 1: case 0:
			cout << "E, GPA is 0";
			count++;
			break;
		case -1:
			cout << "Your GPA is " << setprecision(2) << gpa_sum / count << endl;
			break;
		default:
			cout << "Wrong Score";
			break;
		}
	}
	// print GPA
	return 0;
}
