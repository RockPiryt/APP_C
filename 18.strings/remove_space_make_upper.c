#include <stdio.h>
#include <ctype.h>
#include <string.h> // length

void remove_spaces(char *string);
void make_upper(char *string);

int main(void)
{   
    //char string[] = "Test some\nstring     one and two!";
    char string[256];
    char string2[100];
    

    printf("Enter multiline string:\n");
    //scanf("%[^\n]%*c", string);

    //Get 2 strings
    fgets(string, 256, stdin);
    fgets(string2, 256, stdin);

    // Remove enter from first string
    string[strlen(string) - 1] = '\0';
    
    //Join 2 strings
    char *multiline = strcat(string, string2);

    printf("Original text: %s\n", multiline);
    
    remove_spaces(multiline);
    make_upper(multiline);

    printf("After removing: %s", multiline);
    
    return 0;
}

void remove_spaces(char *string)
{
  int length = strlen(string);

  int j = 0;
  for (int i = 0; i < length; i++)
  {
    if (string[i] != ' ')//if char is letter not space
    {
      string[j] = string[i];//copy only letters
      j++;
    }
  }
  
  // Insert the null terminator to end the string
  string[j] = '\0';
}

void make_upper(char *string)
{
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        string[i] = toupper(string[i]);
    }
}