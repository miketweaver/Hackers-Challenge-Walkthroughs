// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char str[20];
	LONG keys[] = { 17, 20, 18, 19, 21, 22, 49, 24, 30,31,23, 50, 25, 32,  37, 38 };

	for (int i = 0; i < sizeof(keys)/sizeof(keys[0]); i++) {
		GetKeyNameTextA(keys[i] << 16, str, sizeof(str));
		printf("key(%d) -> %s\n", keys[i], str);
	}
    return 0;
}

