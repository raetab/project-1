 #include <string.h>
int main () {
/* the following is a rotation encryption code; this will allow the user to type in a text and enctrypt it using the key */ 
    char encrypt (char * message){
    unsigned char x = 0; //this is a counter which is used to consecutively encrypt the letters within the text they enter
    int key = 0; // this is the key, which is the number of 'shifts' the alphabet is ASCII code will be moved
    
        printf("Insert desiered key for rotation"); //this printf and scanf allows the user to determine the key they wish to use for the rotation encryption
        scanf("%d", &key);
        
        
for (x = 65; x < 123; x++) {
            if (x >= 65 && i <= 90) { /* If the char is uppercase */
            x += key; /* add the key */
            if (x > 90) x -= 26; /* if the char is higher than the highest uppercase char, sub 26 */
            if (x < 65) x += 26; /* if the char is lower than the lowest uppercase char, add 26 */
            
        } else if (x >= 97 && x <= 122) { /* else if it's lowercase */
            x += key; /* add the key */
            if (x > 122) x -= 26; /* if the char is higher than the highest lowercase char, sub 26 */
            if (x < 97) x += 26; /* if the char is lower than the lowest lowercase char, add 26 */
       }

          printf("%c %d\n", x, key);
            
	return 0;
}
}