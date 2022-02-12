#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



/**
 * @brief This program reads an encrypted message and rotation key from the user
 *        validate the rotation key and decrypt the message
 *
 * @return int
 *
 * @author Hasibullah Yosufi
 *
 * Due date: Feb/6th/2022
 *
 * Assessment: lab2
 */

int main()
{






	/* message to decrypt */
	char* p_decptMsg;


	int rotationKey;

	/* to collect invalid input from the buffer input */
	int gcCollector;


	/*allocate 65 byts of memory type char */
	p_decptMsg = (char*)malloc(sizeof(char) * 80);



	/*checks if requeste memory is allocated exit program if not */
	if (p_decptMsg == NULL) {

		puts("Error..could not allocate memory!");
		exit(EXIT_FAILURE);
	}


	int temp;
	printf("Enter the message to decrypt: ");


	/*reads from user including spaces */
	
	int scanRet = scanf("%79[^\n]c", p_decptMsg);

	/*Clear if buffer overflow happen */
	char clearBuff;
	while (clearBuff = getchar() != '\n');







	/*asks for rotation number  */

	printf("Enter rotation key: ");


	scanf("%d", &rotationKey);


	/*checks rotation key to be in the range of 0 - 26 */
	if (rotationKey > 26) {
		rotationKey = -1;
	}


	/*iterate until the user enter a valid input */
	while (!(rotationKey > -1) && !(rotationKey > 26))
	{
		/*to collect garbage values from input buffer */
		gcCollector = 0;
		printf("Error..Key must be between 0 to 26\ntry again: ");

		/*itereate until all the dummy values are cleared from the buffer input */
		while (gcCollector != EOF && gcCollector != '\n') {
			gcCollector = getchar();
		}

		/*reads after invalid input from user */
		scanf("%d", &rotationKey);


		/*checks rotation key to be in the range of 0 - 26 */
		if (rotationKey > 26) {
			rotationKey = -1;
		}


	}


	int length = strlen(p_decptMsg);

	/*decrypt the user input message by subtracting rotation key from all the chars */
	int i = 0;
	for (; i < length; i++) {

		*(p_decptMsg + i) -= rotationKey;
	}

	/*display decrypted message*/
	puts(p_decptMsg);



	return(EXIT_SUCCESS);

}
