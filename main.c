//this is a c program that allows the use of a rotation and substitution cipher to encrypt and decrypt messages

#include <stdio.h>



int main()
{   
   int c, key;
   /*int c - is a counter which is used to consecutively encrypt the letters within the text they enter
   int key - this is the key, which is the number of 'shifts' the alphabet is ASCII code will be moved  */
   char str[100], ch; //char str [100] is a string and ch is a variable which can be passed as an argument in the functions  
   

   printf("\nPlease enter the message for encryption or decryption:\t");
   /*this printf allows the user to determine the message they wish to use for the rotation encryption */
   gets(str);
/* gets is a function that reads a line from stdin and stores it in a string/str); in this code it will stop 
    when an end of file (end of written text entered to the printf function) is reached */

   
 /* this is a menu in which the user can determine the type of cypher they wish to use and whether they wish to encrypt and decrypt*/  
    printf("\n Please chose the following options: \n");
    printf("1 = encrypt message using a caesar cypher.\n");
    printf("2 = decrypt message using a caesar cypher.\n");
    printf("3 = encrypt message using a rotation cypher.\n");
    printf("4 = decrypt message using a rotation cypher.\n");
    scanf("%d", &c);

   //using switch case statements to implement the above 4 options 
   switch(c)
   {
   /* the following is a rotation encryption code; this will allow the user to type in a text and enctrypt it using a desiered key */ 
   case 1:
       printf("Insert desiered key for rotation:"); 
       scanf("%d", & key);
       /*this printf and scanf allows the user to determine the key they wish to use for the rotation encryption*/
      
      
/* the below code is run in a loop so that each character in the string is read and moves its value a given amount of ASCII characters 
determined by the key down the alphabet. It prints the new value of the character determined by the key before being incrementing. The 
c counter is used to determine the next character in the string. If the ASCII characters are shifted beyond Z in the rotation, the 
remaining letters are shifted back to A and continues the alphabet from there*/

        for(c = 0; str[c] != '\0'; ++c){
		ch = str[c];
		
	// below encrypts the lower case letters; leaving numbers, punctuation and grammar the same as in the message		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			str[c] = ch;
		}
        // below encrypts upper case letters; leaving numbers, punctuation and grammar the same as in the message
		if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
	
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			str[c] = ch;
		}
	}

      printf("\nEncrypted message: %s\n", str);
      break;

     case 2:
     printf("Insert desiered key for rotation:"); 
       scanf("%d", & key);
       /*this printf and scanf allows the user to determine the key they wish to use for the rotation encryption*/
      

	for(c = 0; str[c] != '\0'; ++c){
		ch = str[c];
		
		// below decrypts the lower case letters; leaving numbers, punctuation and grammar the same as in the message			
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			str[c] = ch;
		}
		 // below decrypts upper case letters; leaving numbers, punctuation and grammar the same as in the message
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			str[c] = ch;
		}
	}
	
      printf("\nDecrypted string: %s\n", str);
      break;

     case 3:
        printf("Insert the desiered cypher by entering the substituted alphabet charachter in capital below the origninal alphabet sequence (don't use spaces or commas)\n");
        printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");  
        scanf("%s", message);
        
            for (c = 0; str[c] != '\0'; ++c){
            	if(str[c] < 64){
			        str[c] = str[c];
		        	++c;
            	}
			
    			else if(str[c] >= 'A' && str[c] <= 'Z'){
    			    key = (str[c] - 65);
    			    str[c] = message[c];
    				++c;
		    	}
		}
		 

      printf("\nEncrypted string: %s\n", str);
      
      break;
      
     case 4:
           for(c = 0; (c < 100 && str[c] != '\0'); c++)
        str[c] = str[c] - 3; //the key for encryption is 3 that is subtracted to ASCII value

      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nYou selected an unknown option, \nPlease enter: 1, 2, 3 or 4\n",c);
   }
   return 0;
}

    
    
    
           