#include <stdio.h>
 
void encode(){
     
     int i, j, key;
     char message[1000], enc_message[1000], l;
     
     i=0;
     
     printf("Type in the key: ");
     scanf("%d",&key);
     printf("\n");
     
     printf("Type in the message to encode: ");
     scanf("%c",&l);
     printf("\n");
     
     do{
        scanf("%c",&message[i]);
        i++;
     }while ((i<1000)&&(message[i-1]!='\n'));
     
     for (j=0; j<i-1; j++){
         
         if (message[j]==' ')
            enc_message[j]=' ';
         else
            enc_message[j]=message[j]+key;
         
         if (enc_message[j]>'z')
            enc_message[j]=('a'-1)+(key-('z'-message[j]));
     }
     
     printf("The encoded message is: ");
     for (j=0; j<i-1; j++)
         printf("%c",enc_message[j]);
         
     printf("\n");
}
 
void decode(){
     
     int i, j, key;
     char enc_message[1000], dec_message[1000], l;
     
     i=0;
     
     printf("Type in the key: ");
     scanf("%d",&key);
     printf("\n");
     
     printf("Type in the message to decode: ");
     scanf("%c",&l);
     printf("\n");
     
     do{
        scanf("%c",&enc_message[i]);
        i++;
     }while ((i<1000)&&(enc_message[i-1]!='\n'));
        
     for (j=0; j<i-1; j++){
         if (enc_message[j]==' ')
            dec_message[j]=' ';
         else
             dec_message[j]=enc_message[j]-key;
         
         if (dec_message[j]<'a')
            dec_message[j]=('z'+1)-(key+('a'-enc_message[j]));
     }
     
     printf("The decoded message is: ");
     for (j=0; j<i-1; j++)
         printf("%c",dec_message[j]);
         
     printf("\n");
}
 
main(){
       
    char option;
    
    printf("Welcome\n");
    printf("1. Encode message.\n");
    printf("2. Decode message.\n");
    
    do{
       printf("\n");
       printf("Option: ");
       scanf("%c",&option);
    
       if (option=='1')
          encode();
       else if (option=='2')
          decode();
    }while(1);
}
