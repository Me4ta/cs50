#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

//This programm encripts any sentence you've input using Caesar's encript.

int encrypt_char(int charCode, int key)
{
    charCode = (int)charCode;
    if (charCode >= 65 && charCode <= 90)
        return 65 + (charCode - 65 + key) % 26;  
    else if (charCode >= 97 && charCode <= 122)
        return 97 + (charCode - 97 + key) % 26; 
    else return (char)charCode;
} 

int main(int argc, string argv[])
{
    
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf("Bye, dummy loser!\n");
        return 1;
    }
    else 
    {
        int key = atoi(argv[1]);
        string sentence = GetString();
        int n = strlen(sentence);
        for (int i = 0; i < n; i++)
        {
            sentence[i] = encrypt_char(sentence[i], key);
        }
        printf("%s\n", sentence);
    }
}
