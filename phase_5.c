#include <stdio.h>

int main(void)
{
	char input[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	char array[] = "isrveawhobpnutfg";
	char output;

	while (input[i])
	{
		output = array[(input[i] & 0xf)];
		printf("%c", output);
		i++;
	}

	printf("\n");
	return (0);
}

/*
srveawhobpnutfgisrveawhobp
abcdefghijklmnopqrstuvwxyz

opekma
*/
