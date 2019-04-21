#include<stdio.h>
int main () {
    
    
    
/* the following code below this exction is an encryption code
 
    /* the following is a rotation encryption code; this will allow the user to type in a text and enctrypt it using the key */ 
    char message[500] = "message", ch; //char message [500] is an array and ch is a variable which can be passed as an argument in the functions  
    unsigned char x=0; //this is a counter which is used to consecutively encrypt the letters within the text they enter
    int key; // this is the key, which is the number of 'shifts' the alphabet is ASCII code will be moved
    
        printf("enter the desiered message you wish to encrypt:");
        /*this printf allows the user to determine the message they wish to use for the rotation encryption */
        fgets(message); 
        /* gets is a function that reads a line from stdin and stores it in a string (message); in this code it will stop 
        when an end of file (end of written text entered to the printf function) is reached */
        
        printf("Insert desiered key for rotation:"); 
        scanf("%d", &key);
        /*this printf and scanf allows the user to determine the key they wish to use for the rotation encryption*/
        
    /* the below code is run in a loop so that each character in the 'message'/ string is read and moves its value a given amount of ASCII 
characters determined by the key down the alphabet. It prints the new value of the character determined by the key before being incrementing
the x counter to determine the next character in the string. If the ASCII characters are shifted beyond Z in the rotation, they remaning
letters are shifted back to A and continuse the alphabet from there*/

        for (x=0; message[x] !='\0'; ++x){
            ch=message[x];
    /* the first if statment in the loop is used so that any punctuation character that is read in the string will remain that same form of 
punctuation  e.g. a fullstop, comma, or apostrophe will remain unchanged in the function*/
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Encrypted message: %s", message);
	
	return 0;
*/
    
           