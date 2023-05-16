#include <iostream>
#include "cstdlib"

// counting vowels and consonants
int countVowelConsonant(char arr[]) {
    int i, vcount = 0, ccount = 0;
    for (i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' ||
            arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
            vcount++;

        } else if ((arr[i] >= 65 && arr[i] <= 90) || arr[i] >= 97 && arr[i] <= 122){
            ccount++;
        }
    }
    printf("the number of vowels is %d \n", vcount );
    printf("the number of consonants is %d \n", ccount );

}
int wordCount(char arr[]){
    int word = 1;
    for (int i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] == ' ' && arr[i - 1] != ' ')
            word++;
    }
    printf("The number of words are %d ", word);
}

int main(){
    char a[] = "how are you";
    countVowelConsonant(a);
    wordCount(a);


}

