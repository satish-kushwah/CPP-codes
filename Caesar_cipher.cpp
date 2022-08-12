#include<stdio.h>
#include<string.h>

int main() {
    char str[101];
    int choice,shift;
    printf("choose an option below\n");
    printf("1. Encrypt a message\n2. Decrypt a cipher\n: ");
    scanf("%d",&choice);
    if(choice==1)
        printf("Enter message to be encrypted: ");
    else if(choice==2)
        printf("Enter message to be decrypted: ");
    getchar();
    gets(str);
    printf("Enter shift amount (1-25): ");
    scanf("%d",&shift);
    if(choice==1)
        printf("Encrypted message: ");
    else if(choice==2)
        printf("Decrypted message: ");
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            if((str[i]+shift)>122)
                putchar(str[i]+shift-26);
            else
                putchar(str[i]+shift);
        }
        else if(str[i]>='A' && str[i]<='Z'){
            if((str[i]+shift)>90)
                putchar(str[i]+shift-26);
            else
                putchar(str[i]+shift);
        }
        else putchar(str[i]);   
    }
    return 0;
}