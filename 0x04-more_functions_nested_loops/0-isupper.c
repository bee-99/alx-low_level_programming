#include "main.h"

/**
 * _isupper - checks for uppercase character
 * Returns: 1 Success
 */

int _isupper(int c)
{

       
	if (c == 65 && c <= 90)
	{
		return(1);
		c++;
	}
		
	else if (c == 97 && c <= 122)
	{
		return(0);
		c++;
	}

	return(c);	
}

