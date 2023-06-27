#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generatepassword - generates a rondom password
 * @len: length of the generated password
 *
 * Return - password
 */

void generatepassword(int len)
{
	char possiblechars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";
	char password[len+1];

	srand(time(0));
	for(int i = 0; i < len; i++)
	{
		int randomindex = rand() % (sizeof(possiblechars) - 1);
		password[i] = possiblechars[randomindex];
	}

	password[len] = '\0';
	printf("Randomly generated password is: %s\n", password);
}

int main()
{
	int len = 10;
	generatepassword(len);
	return 0;
}
