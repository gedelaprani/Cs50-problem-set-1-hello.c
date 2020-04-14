#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do 
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
        int rows;
        rows=height-1;
        int hashes;
        int spaces; 
        int hino;
       for(spaces=1; spaces<=rows+1; spaces++)
       {    
           
           for(hino=spaces; hino<=rows; hino++)
           {
               printf(" ");
           }              
        
            for(hashes=1; hashes<=spaces; hashes++)
            {
                        printf("#");
            }
           
           
       printf("\n");
       }




}       
