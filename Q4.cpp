#include <iostream>
#include <string>
using namespace std;

char* nthWord(char* word, int n){
    char selectedWord[100];
    char* stringPointer = selectedWord;
    int spacecnt = 0, i = 0, j = 0;
    n = n - 1;

    // If the user wants the first word, Please use this base case
    if(n == 0){
        while(word[i] != ' '){
            selectedWord[i] = word[i];
            ++i;
        }
    }

    // If wants the 2+ word use this case
    else{
        
        // Cycle through the sentence until the counter of spaces is equal to n
        while(spacecnt < n){
            if(word[i] == ' '){
                ++spacecnt;
            }
            ++i;
        }

        // Once the i is at the first letter of the first word, incriment until the end of the word
        while(spacecnt == n && word[i] !='\0'){ // While the amount of spaces is equal to n AND the current letter is not after the sentence...
            
            cout << "The word added is: " << word[i] << endl;
            selectedWord[j] = word[i];
            ++j;

            // If the current 
            ++i;
            if(word[i] == ' '){
                ++spacecnt;
            }
        }
    }
    return stringPointer;
}

