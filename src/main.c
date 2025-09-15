#include <stdio.h>
#include <string.h>

void dec_to_binary(int n);

int main(int argc, char *argv[]) 
{   

    if (argc < 2) 
    {
        printf("Too few arguments\n");
        printf("Usage: %s \"text\"\n", argv[0]);
        return 1;
    }
    /**
     * Get user input and print each letter and ascii code for it
     */
    const char *header = "   Dec | Hex | \tBin\n--------------------";
    puts(header);

    /* loop over each word */
    for (int i = argc - 1; i < argc; i++)
    {
        int word_len = strlen(argv[i]);
        /* loop over each character in a string */
        for (int j = 0; j < word_len; j++)
        {
            /* single char */
            char c = argv[i][j];
            /* print char: decimal hex */
            printf("%c: %d\t %X\t", c, c, c);
            /* add binary form */
            dec_to_binary(c); 
            printf("\n");
        }
    }
    return 0;
}

void dec_to_binary(int n)
{
    // array to store number
    int binary_num[1000];

    // counter for an array
    /*
        While n > 0, divide number `n` by two
        then store remainder in array
    */
   int i = 0;
    while (n > 0)
    {   
        // store number in array
        binary_num[i] = n % 2;
        // divide number by two again and again until n > 0
        n = n / 2;
        i++;
    }

    /* loop over reminders and print binary number in reverse order */
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", binary_num[j]);
    }
}
