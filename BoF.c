#include <stdio.h>
#include <string.h>

int main()
{  	 /*kapaciteti buffer-it 0-8*/
    char buff[8];
    int pass = 0;

    printf("\n Fjalekalimi per root-in : \n");
    gets(buff);
    
    	/*Fjalekalimi i gabuar*/
    if(strcmp(buff, "toor"))
    {
        printf ("\n Fjalekalimi i gabuar \n");
    }
    
	/*Fjalekalimi i sakte*/
    else
    {
        printf ("\n Fjalekalimi i sakte \n");
        pass = 1;
    }

    if(pass)
    {
        printf ("\n toor eshte fjalekalimi per administratorin \n");
    }

    return 0;
}

