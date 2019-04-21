#include<stdio.h>
#include <string.h>
int main () {
/* the following is a rotation encryption code; this will allow the user to type in a text and enctrypt it using the key */ 
    char encrypt (char * message){
    unsigned char x=0; //this is a counter which is used to consecutively encrypt the letters within the text they enter
    int key; // this is the key, which is the number of 'shifts' the alphabet is ASCII code will be moved
    
        printf("enter the desiered message you wish to encrypt"); //this printf and scanf allows the user to determine the message they wish to use for the rotation encryption
        gets(messgae); // this is a 
        
        printf("Insert desiered key for rotation"); //this printf and scanf allows the user to determine the key they wish to use for the rotation encryption
        scanf("%d", &key);
        
/* the below code is run in a loop so that each character in the 'message'/ string is read and moves its value a given amount of ASCII characters determined by 
the key down the alphabet. It prints the new value of the character determined by the key before being incrementing th x counter to determine the next character
in the string. If the ASCII characters are shifted beyond Z in the rotation, they remaning letters are shifted back to A and continuse the alphabet from there*/

        while (message[x] !=0){
/* the first if statment in the loop is used so that any punctuation character that is read in the string will remain that same form of punctuation
e.g. a fullstop, comma, or apostrophe will remain unchanged in the function*/
            if (messgae[x] <=65){
                message[x] = messgae[x];
                x++;
            }
            else if ((message[x] +key) <= 90 && (message[x]=>65)){
                message[x] = (message[x] + key);
                x++
            }
            else if ((message[x] + key)>90){
                message[x] = ((message[x] -26) + key);
            }
            }
        }


          printf("%c %d\n", x, key);
            
	return 0;

}