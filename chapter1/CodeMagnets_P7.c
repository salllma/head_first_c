/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{	
	int val = 0;
	char card_name[3];
	puts ("Enter the card name:");
	scanf ("%2s", card_name);
	

	if  (card_name[0] == 'k')
	{
		val = 10;
	} else if (card_name[0] == 'Q') {
		val = 10;
	} else if (card_name[0] == 'J') {
		val = 10;  
	} else if (card_name[0] == 'A') {
		val = 11;
	} else {
		val = atoi (card_name);
	}
	printf ("The value of the card is %d\n", val);

	return 0;
}


/* (int val) vs (char card_name)
* how to assign a int varible to a char? >> solve the conflict 
* If you enter a card name that is a valid numerical string, 
* the atoi function will convert it into an integer value. 
* For example, if you enter '7' as the card name,
* atoi will convert it to the integer value 7, and that value will be assigned to val
*/