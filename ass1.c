#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
    FILE *f1, *f2; 
    char file[100], n; 
  
    printf("Enter the input filename:- \n"); 
    scanf("%s", file); 
  
    f1 = fopen(file, "r"); 
    if (f1 == NULL) 
    { 
        printf("Cannot open file %s \n", file); 
        exit(0); 
    } 
  
    printf("Enter the output filename:- \n"); 
    scanf("%s", file); 
  
    f2 = fopen(file, "w"); 
    if (f2 == NULL) 
    { 
        printf("Cannot open file %s \n", file); 
        exit(0); 
    } 
  
    n = fgetc(f1); 
    while (n != EOF) 
    { 
        fputc(n, f2); 
        n = fgetc(f1); 
    } 
  
    printf("\nContents copied to %s", file); 
  
    fclose(f1); 
    fclose(f2); 
    return 0; 
}
