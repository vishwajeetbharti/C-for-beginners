#include<stdio.h>
    int convert_bin_to_dec(int num)
    {
   	 if (!(num / 10)) 
	 return (num);
   	 return (num % 10 + convert_bin_to_dec(num / 10) * 2); 
     }
int main()
{
    int binary,decimal;
    printf("Enter the binary number to be converted\n");
    scanf("%d",&binary);
    decimal=convert_bin_to_dec(binary);
    printf("\nThe decimal number for %d is %d",binary, decimal);
}
