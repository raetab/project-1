#include <stdio.h>
int main () {

    char message[]="HELLOWORLD";
    int i;
    int key; 
    

    for (i = 65; i < 91; i++) {
        if (i >= 65 && i <= 90) { /* If the char is uppercase */
            i+= key; /* add the key */
            if (i > 90) i -= 26; /* if the char is higher than the highest uppercase char, sub 26 */
            if (i < 65) i += 26; /* if the char is lower than the lowest uppercase char, add 26 */
     
        printf("%c %d"\n, i, key);



	return 0;
}
