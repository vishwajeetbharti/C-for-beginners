#include<stdio.h>
#include<string.h>
union intro
{
    char name[20];
    char fname[20];
    long double Phone;
};
void main()
{
    union intro vb;
    strcpy(vb.name,"Vishwajeet Bharti");
    printf("%s\n",vb.name);
    strcpy(vb.fname,"Binod Prasad");
    printf("%s\n",vb.fname);
    vb.Phone=7366828903;
    printf("%ld\n",vb.Phone);
}
