#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by Microsoft
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main(void) {
	char  tokenstring[] = "15 12 14...";
	char  s[81];
	char  c;
	int   i;
	float fp;

	// Input various data from tokenstring:
	// max 80 character string plus null terminator
	sscanf_s(tokenstring, "%s", s, (unsigned)_countof(s));
	sscanf_s(tokenstring, "%c", &c, (unsigned)sizeof(char));
	sscanf_s(tokenstring, "%d", &i);
	sscanf_s(tokenstring, "%f", &fp);

	// Output the data read
	printf_s("String    = %s\n", s);
	printf_s("Character = %c\n", c);
	printf_s("Integer:  = %d\n", i);
	printf_s("Real:     = %f\n", fp);

	_getch();
	return 0;
}