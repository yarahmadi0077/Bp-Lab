#include <stdio.h>
#include <stdlib.h>
int freq[256];

int main() {
    char str[100];
    fgets(str , 100 , stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    int index_maxFreq = 0;
    char maxChar = '\0';
    for (int i = 0; i < 256; i++) {
        if (freq[i] > index_maxFreq) {
            index_maxFreq = freq[i];
            /*cast*/maxChar = (char) i;
        }
    }
    printf("The most frequent character in the string \"%s\" is \"%c\" with a frequency of %d.\n", str, maxChar, index_maxFreq);

    return 0;
}

