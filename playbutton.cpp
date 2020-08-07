/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <cstring>
#define SIZE 100

using namespace std;

string Answer[] = { "NONE", "SILVER", "GOLD", "DIAMOND" };

int main(int argc, char** argv)
{
	int T, test_case;
	int sub = 0;
	int result;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */

	 // freopen("input.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		cin >> sub;

		if (sub > 10000000)
			result = 3;
		else if (sub > 1000000)
			result = 2;
		else if (sub > 100000)
			result = 1;
		else
			result = 0;
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer[result] << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
