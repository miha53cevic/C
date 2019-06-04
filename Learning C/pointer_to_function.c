// 
// Author: Mihael Petrièeviæ
// Source: https://www.geeksforgeeks.org/function-pointer-in-c/ 
//

#include <stdio.h>

void func(int a, int b)
{
	int result = a + b;

	printf_s("%d\n", result);
}

int main(int argc, char* argv[])
{
	// Pointer na funkciju
	// void -> staviti povratni tip funkcije
	// (*ime_pointera)(argumenti funkcije)
	// &func -> adresa funkcije na koju kazemo
	void(*ptr_func)(int, int) = &func;

	// can remove & symbol still works
	// void(*ptr_func)(int, int) = func;

	(*ptr_func)(9, 3);

	// can remove * symbol still works
	// (*ptr_func)(9, 3);

	// Windows only
	//system("pause");
	return 0;
}