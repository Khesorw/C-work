#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {



	
	

	char* p_decptMsg;


	//rotation key to dcrypte the messge 
	int rotationKey;

	//to collect invalid input from the buffer input 
	int gcCollector;


	//allocate 65 byts of memory type char
	p_decptMsg = (char*)malloc(sizeof(char) * 65);


	//checks if requeste memory is allocated exit program if not 
	if (p_decptMsg == NULL) {

		puts("Error..could not allocate memory!");
		exit(EXIT_FAILURE);
	}


	printf("Enter the message to decrypt: ");


	//reads from user including spaces
	fgets(p_decptMsg, 64, stdin);


	//remove new line created by fgets()
	p_decptMsg[strlen(p_decptMsg) - 1] = 0;

	


	printf("Enter rotation key");

	scanf("%d", &rotationKey);


	//checks rotation key to be in the range of 0 - 26
	if (rotationKey > 26) {
		rotationKey = -1;
	}



	while (!(rotationKey > -1) && !(rotationKey > 26))
	{
		//to collect garbage values from input buffer
		gcCollector = 0;
		printf("Error..Key must be between 1 to 26\ntry again: ");
		
		while (gcCollector != EOF && gcCollector != '\n') {
			gcCollector = getchar();
		}
		
		//reads after invalid input from user
		scanf("%d", &rotationKey);


		//checks rotation key to be in the range of 0 - 26
		if (rotationKey > 26) {
			rotationKey = -1;
		}
		

	}


	int length = strlen(p_decptMsg);

	for (int i = 0; i < length; i++) {

		*(p_decptMsg + i) -= rotationKey;
	}

	//display decrypted message
	puts(p_decptMsg);



	return(EXIT_SUCCESS);
	
}