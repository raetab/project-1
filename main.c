//this is a c program that allows the use of a rotation and substitution cipher to encrypt and decrypt messages
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){   

   int counter, k, choice; 
   /*int counter - is a counter  which is used to consecutively encrypt the letters within the text they enter
   int k - this is the key, which is the number of 'shifts' the alphabet is ASCII code will be moved  */

    char message[1024], ch; //char message [100] is a string and ch is a variable which can be passed as an argument in the functions  
    unsigned char c =0;
    char key [1024];
    char keyencryption(char *key1);
    char character;
    
    char *message1 [1024];


     /* this is a menu in which the user can determine the type of cypher they wish to use and whether they wish to encrypt and decrypt*/  

    printf("\n Please chose the following options: \n");
    printf("1 = encrypt message using a caesar cypher.\n");
    printf("2 = decrypt message using a caesar cypher.\n");
    printf("3 = encrypt message using a rotation cypher.\n");
    printf("4 = decrypt message using a rotation cypher.\n");
    scanf("%d", &counter);

   //using switch case statements to implement the above 4 options 
   switch(choice)
   {
   /* the following is a rotation encryption code; this will allow the user to type in a text and enctrypt it using a desiered key */ 
   case 1:
           
       printf("\nPlease enter the message for encryption or decryption:\t");
       /*this printf allows the user to determine the message they wish to use for the rotation encryption */
       gets(message);
        /* gets is a function that reads a line from stdin and stores it in a string/str); in this code it will stop 
        When an end of file (end of written text entered to the printf function) is reached */
        
       printf("Insert desiered key for rotation:"); 
       scanf("%d", & k);
       /*this printf and scanf allows the user to determine the key they wish to use for the rotation encryption*/

        /* the below code is run in a loop so that each character in the string is read and moves its value a given amount of ASCII characters 
        determined by the key down the alphabet. It prints the new value of the character determined by the key before being incrementing. The 
        c counter is used to determine the next character in the string. If the ASCII characters are shifted beyond Z in the rotation, the 
        remaining letters are shifted back to A and continues the alphabet from there*/

        for(counter = 0; message[counter] != '\0'; ++counter){
		ch = message[counter];
	    // below encrypts the lower case letters; leaving numbers, punctuation and grammar the same as in the message		

		if(ch >= 'a' && ch <= 'z'){
			ch = ch + k;
			    if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			message[counter] = ch;
		}

        // below encrypts upper case letters; leaving numbers, punctuation and grammar the same as in the message

		if(ch >= 'A' && ch <= 'Z'){
			ch = ch + k;
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			message[counter] = ch;
		}
	}
      printf("\nEncrypted message: %s\n", message);

    break;

    case 2:
            
       printf("\nPlease enter the message for encryption or decryption:\t");
       /*this printf allows the user to determine the message they wish to use for the rotation encryption */
       gets(message);
        /* gets is a function that reads a line from stdin and stores it in a string/str); in this code it will stop 
        When an end of file (end of written text entered to the printf function) is reached */
        
        printf("Insert desiered key for rotation:"); 
        scanf("%d", & k);
       /*this printf and scanf allows the user to determine the key they wish to use for the rotation encryption*/

	    for(counter = 0; message[counter] != '\0'; ++counter){
		    ch = message[counter];
		// below decrypts the lower case letters; leaving numbers, punctuation and grammar the same as in the message			

		if(ch >= 'a' && ch <= 'z'){
			ch = ch - k;
			if(ch < 'a'){
			    ch = ch + 'z' - 'a' + 1;
			}
			message[counter] = ch;
		}

		 // below decrypts upper case letters; leaving numbers, punctuation and grammar the same as in the message
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - k;
			if(ch < 'A'){
			    ch = ch + 'Z' - 'A' + 1;
			}
			message[counter] = ch;
		}
	}
        printf("\nDecrypted string: %s\n", message);

    break;

    case 3:

        
int find_index(char code[],char char_to_find,){
    
  for(int i = 0 ; i < 26; i ++){
    if(code[i] == char_to_find){
      return i;
    }
  }
  return -1;
}


char* encrypt(char *message1,char code[]){
  int length = strlen(message1);
  char *encrypted_message = (char *) malloc(sizeof(char)*length);

  for(int i = 0; i < length; i++){
    int encryption_index = toupper(message1[i]) - 'A';
    if(encryption_index >= 0 && encryption_index < 26){
      encrypted_message[i] = code[encryption_index];
    }else{
      encrypted_message[i] = message1[i];
    }
  }
  return encrypted_message;
}


  char *message1 [1024];
  printf("\nPlease enter the message for encryption or decryption:\n");
  gets(message1);
  
  
  char code[26];  

        printf("Insert the desiered key for the substitution cypher\n");
        printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");  
        gets(code);

  char *encrypted_message = encrypt(message1, code);
  printf("Original Message: %s\nEncrypted Message: %s\n", message1, encrypted_message);


    break; 

    case 4:
           for(counter = 0; (counter < 100 && message[counter] != '\0'); counter++)
        message[counter] = message[counter] - 3; //the key for encryption is 3 that is subtracted to ASCII value
      printf("\nDecrypted string: %s\n", message);
    break;
    
    
    

    default:
      printf("\nYou selected an unknown option, \nPlease enter: 1, 2, 3 or 4\n",counter);
   }
   return 0;
}