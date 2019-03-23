#include <iostream>
#include <vector>
#include <fstream>
#include "Dialogue.h"


int main()
{
	Dialogue dial;
	dial.LoadScript("TEST2");

	dial.Play();

	system("pause");
	return 0;
}