#include <iostream>
#include <cstdlib>
#include "hello.hpp"
#include "goodbye.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	int num = atoi(argv[1]);
	cout << "Hello " << num << endl;

	hello::say_hello();

	bye::good_bye();

	return 0;
}
