//this is a c program that allows the use of a rotation and substitution cipher to encrypt and decrypt messages
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


        
int find_index;
char *code;
char *char_to_find;


int main(){   
    int counter, k, choice; 
    /*int counter - is a counter  which is used to consecutively encrypt the letters within the text they enter
    int k - this is the key for the rotation cyphers, which is the number of 'shifts' the alphabet is ASCII code will be moved 
    int choice- is the variable used in the switch case, that allows the users choice*/
    char message[1024], ch; //char message is a string in the rotation cypher and ch is a variable which can be passed as an argument in the functions  
    char *message1 [1024]; //this is a string in the substitution cyphers

        /* this printf and allows the user to determine the message they wish to use for encryption or decryption */    
       printf("\nPlease enter the message for encryption:\t");
       gets (message);
        /* gets is a function that reads a line from stdin and stores it in a string/str); in this code it will stop 
        when an end of file (end of written text entered to the printf function) is reached */
   
   
     /* this is a menu in which the user can determine the type of cypher they wish to use and whether they wish to encrypt and decrypt*/  
    printf("\n Please chose the following options: \n");
    printf("1 = encrypt message using a caesar cypher.\n");
    printf("2 = decrypt message using a caesar cypher.\n");
    printf("3 = encrypt message using a substitution cypher.\n");
    printf("4 = decrypt message using a substitution cypher.\n");
    scanf("%d", &choice);

   //using switch case statements to implement the above 4 options 
   switch(choice)
   {
   /* the following is a rotation encryption code; this will allow the user to type in a text and enctrypt it using a desiered key */ 
   case 1:
   
       
       /*this printf and scanf allows the user to determine the key they wish to use for the rotation encryption*/
       printf("Insert desiered key for rotation:"); 
       scanf("%d", & k);

        /* the below code is run in a loop so that each character in the string is read and moves its value a given amount of ASCII characters 
        determined by the key down the alphabet. It prints the new value of the character determined by the key before being incrementing. The 
        counter is used to determine the next character in the string. If the ASCII characters are shifted beyond Z in the rotation, the 
        remaining letters are shifted back to A and continues the alphabet from there*/

        for(counter = 0; message[counter] != '\0'; ++counter){
		ch = toupper(message[counter]); // this turns all lower case letters to upper cases
	
        // below encrypts upper case letters; leaving numbers, punctuation and grammar the same as in the message
		if(ch >= 'A' && ch <= 'Z'){
			ch = ch + k;
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			message[counter] = ch;
		}
	}
      printf("\nEncrypted message: %s\n", message);//this prints the encrypted message to the terminal

    break;

    case 2:

    
        /*this printf and scanf allows the user to determine the key they wish to use for the rotation decryption*/
        printf("Insert desiered key for rotation:"); 
        scanf("%d", & k);

	    for(counter = 0; message[counter] != '\0'; ++counter){
		    ch = toupper(message[counter]);
		// below decrypts the lower case letters changing them to capitals; leaving numbers, punctuation and grammar the same as in the message			

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
        printf("\nDecrypted string: %s\n", message);//this prints the decrypted message to the terminal

    break;

    case 3:
  /* in this case and case 4 of code -  char code is the key used */  
    for(int i = 0 ; i < 26; i ++){
        if(code[i] == char_to_find){
        }
      }

 
    char* encrypt(char *message,char *code){
      int length = strlen(message);
      char *encrypted_message = (char *) malloc(sizeof(char)*length);// this allocates space for the data to be stored
      
    /*this will go through the message character by character and will change the character to that desginated by the key which is *code inputed 
    by the user and change lower case to upper case; the - A is used to get the encryption index, by zeroing the first value of the inputted key*/
      for(int i = 0; i < length; i++){ 
        int encryption_index = toupper(message[i]) - 'A';
        if(encryption_index >= 0 && encryption_index < 26){
          encrypted_message[i] = code[encryption_index]; //this will place the key character in the plcae of the original message
        }else{
          encrypted_message[i] = message[i];//this will allow all other characters that are not letter to remain the same
        }
      }
      return encrypted_message;
    }


      
    //this printf and scanf will allow the user to enter a key for the substitution cypher encryption  
    char code[26];  
        printf("Insert the desiered key for the substitution cypher\n");
        printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");  
        scanf ("%s", &code);
          
    //this allows for the encrypted message to be printed to the terminal
    char *encrypted_message = encrypt(message, code);
        printf("Encrypted Message: %s\n", encrypted_message);
        
    break; 

    case 4:

    for(int i = 0 ; i < 26; i ++){
        if(code[i] == char_to_find){
        }
      }


    char *decrypt(char *message,char *code){
      int length = strlen(message);
      char *decrypted_message = (char *) malloc(sizeof(char)*length);// this allocates space for the data to be stored
      
/*this will go through the message character by character and will change the character to that desginated by the key which is *code inputed 
    by the user and change lower case to upper case; the - A is used to get the encryption index, by zeroing the first value of the inputted key*/
  for(int i = 0; i < length; i++){
    int decryption_index = toupper(message[i]) - 'A';
    if(decryption_index >= 0 && decryption_index < 26){
        
        find_index = code, toupper(message[i]);// find index will allow the charcter to be found in the message
        int code_index = find_index;
        decrypted_message[i] = 'A' + code_index; //this will place the key character to read english from the decrypted message
    }
    else{
      decrypted_message[i] = message[i];//this will allow all other characters that are not letter to remain the same
    }
  }

  return decrypted_message;

}


  
    //this printf and scanf will allow the user to enter a key for the substitution cypher decryption 
        printf("Insert the desiered key for the substitution cypher\n");
        printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");  
        scanf ("%s", &code);
      
    //this allows for the decrypted message to be printed to the terminal
  char *decrypted_message = decrypt(encrypted_message, code);
  printf("Decrypted Message: %s\n",decrypted_message);

    break;
    
    
    

    default:
      printf("\nYou selected an unknown option, \nPlease enter: 1, 2, 3 or 4\n",counter);
   }
   return 0;
}