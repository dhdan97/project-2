/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>

int prime(int);

int main()
{
	int n;
	while(cin >> n)
	{
		if(prime(n) == 0)
			cout << "1\n";
		if(prime(n) == 1)
			cout << "0\n"
	}
	return 0;
}
int prime(int n)
{
	int isprime = 0;
	
	for(int k = 2; k <= n-1; ++k)
	{
		if(n % k == 0)
		{
			isprime = 1;
			break;
		}
	}
	return isprime;
}
}
