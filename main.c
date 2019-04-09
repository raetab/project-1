#include <stdio.h>
int main () {

    char message[]="HELLOWORLD";
    int i;
    int key; 
    

for (i = 65; i < 123; i++) {
            if (i >= 65 && i <= 90) { /* If the char is uppercase */
            i += key; /* add the key */
            if (i > 90) i -= 26; /* if the char is higher than the highest uppercase char, sub 26 */
            if (i < 65) i += 26; /* if the char is lower than the lowest uppercase char, add 26 */
            
        } else if (i >= 97 && i <= 122) { /* else if it's lowercase */
            i += key; /* add the key */
            if (i > 122) i -= 26; /* if the char is higher than the highest lowercase char, sub 26 */
            if (i < 97) i += 26; /* if the char is lower than the lowest lowercase char, add 26 */
       }

          printf("%c %d\n", i, key);
            
	return 0;
}
}