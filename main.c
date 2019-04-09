#include <stdio.h>
int main () {

    char message[]="HELLOWORLD";
    int i;
    int key; 
    

    for (i = 65; i < 91; i++) {
            
        printf("%c %d"\n, i, key);


for (i = 0; i < 123; i++) {
            if (ch >= 65 && ch <= 90) { /* If the char is uppercase */
            ch += key; /* add the key */
            if (ch > 90) ch -= 26; /* if the char is higher than the highest uppercase char, sub 26 */
            if (ch < 65) ch += 26; /* if the char is lower than the lowest uppercase char, add 26 */
            src[i] = (char)ch; /* set the current char in src to the char value of ch */
        } else if (ch >= 97 && ch <= 122) { /* else if it's lowercase */
            ch += key; /* add the key */
            if (ch > 122) ch -= 26; /* if the char is higher than the highest lowercase char, sub 26 */
            if (ch < 97) ch += 26; /* if the char is lower than the lowest lowercase char, add 26 */
            src[i] = (char)ch;
            
            
	return 0;
}
