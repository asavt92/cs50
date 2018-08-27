/**
 * copy.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Copies a BMP piece by piece, just because.
 */
       
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t  BYTE;
const int SIZE = 512;

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./copy infile outfile\n");
        return 1;
    }
    
    // remember filenames
    char* infile = argv[1];
    BYTE ba[SIZE];


    // open input file 
    FILE* inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }
    
    int i =0;
    char outfile[15];
    int fl = 0;
    sprintf(outfile,"%d.jpg",i);
    
    FILE* outptr = fopen(outfile, "w");
    
    while(fread(&ba, SIZE, 1, inptr) == 1){
        if(ba[0] == 0xff && ba[1] == 0xd8 && ba[2] == 0xff && ba[3] >= 0xe0){
            
            fclose(outptr);
            sprintf(outfile,"%d.jpg",i);
            outptr = fopen(outfile, "w");
            fl = 1;
            i++;
            }
         if(fl>0){
            fwrite(&ba, SIZE, 1, outptr);
            }
    }

    // close infile
    fclose(inptr);

    // that's all folks
    return 0;
}
