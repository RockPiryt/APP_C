#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //Refence to file, file handler
    FILE *fh_output;

    //Open file in write mode
    fh_output = fopen("some.txt", "w");

    //Add text to file
    fputs("I love candys\n", fh_output);

    //Print some value in placeholder
    int num=18;
    fprintf(fh_output, "some text: %d\n", num);

    //Close file
    fclose(fh_output);
//////////////////////////////////////////////////////////////////
    //Refence to file, file handler
    FILE *fh_output;
    //Open file in append mode
    fh_output = fopen("some.txt", "w");
    //fh_output = fopen("some.txt", "a");

    // //Add text to file
    // fputs("Add some text about chocolate\n", fh_output);
    
    // //For loop + fprintf
    // fputs("For loop value: \n", fh_output);
    // for(int i=0; i<10; i++)
    //     fprintf(fh_output, "%d\n", i);

    //User input value via command line to txt file
    fputs("User value: \n", fh_output);
    int input=0;
    while (true)
    {   printf("Enter -1 to Quit: ");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        else
        {
            fprintf(fh_output, "%d\n", input);
        }
    }
    

    //Close file
    fclose(fh_output);
/////////////////////////////////////////
    //read from file

    //Refence to file, file handler
    FILE *fh_intput;

    //Open file in write mode
    fh_intput = fopen("some.txt", "r");

    int val=0;
    int num_array[100];
    int lines=0;// count lines

    while(fscanf(fh_intput, "%d", &val)!=EOF)
    {   num_array[lines]=val;
        printf("Number %d\n", val);
        lines++;
    }
    
    int total=0;
    for (int j=0; j<lines; j++)
    {
        total+= num_array[j];
    }

    printf("Average= %d\n", total/lines);

    //Close file
    fclose(fh_intput);

    ///////////////////////////////////////////////////////

     //read from file

    //Refence to file, file handler
    FILE *fh_intput;

    //Open file in write mode
    fh_intput = fopen("in.txt", "r");

    //Get text from file and save to array 
    char array[256]; //buffer for text as string

    fgets(array, 256, fh_intput);

    printf("Text from file:\n %s",  array);

    
    //Close file
    fclose(fh_intput);


    return 0;
}