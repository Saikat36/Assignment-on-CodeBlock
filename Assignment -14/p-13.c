

#include <stdio.h>
                            // string likhar 1st rule
// int main()
// {
//     char name[] = {'a','r','g','h','o','\0'};
//     printf("%s",name);
//     return 0;
// }
                            // string likhar 2nd rule
// int main()
// {
//     char name[] = "argho";
//     printf("%s",name);
//     return 0;
// }



                        /* WAP to collect a string by user */

// int main()
// {
//     char name[20];
//     printf("Enter your name: ");
//     scanf("%s", name);           /* STRING a kono "&" use hoina karon string name likha daya mane holo string ar 1st address ta pass korea daya tai R extra kora "&" dita hoina */

//     printf("Your name is: %s",name);     
//     return 0;
// }


                            /* gets function */ 
// int main()
// {
//     char name[10];
//     printf("Enter your name: ");
//     gets(name);           /* user jodi kono name ar majha space dai tahole scanf seta dhota parena, tai ai problem theka baronor jonno gets use kora hoi, gets a only string name likha dilai enough */

//     printf("Your name is: %s",name);     
//     return 0;
// }

                            /* fgets function */

int main()
{
    char name[10];
    printf("Enter your name: ");
    fgets(name, 10, stdin);           /*  tobe gets a akta problem a6a jamon akhena "name" a je array a6a otai 9 ta character & last a 1 tai null chracter nayar kotha, but jodi user type kora boro kono string then code ta run korai tokon dekha jabe code run hoa ga6a but ota illigal memory access kora6a, tai ai problem theka barea asar jonno amra use kori " fgets " function jetai koto ta limit seta bola daya thake tar theka basi boro string dilau seta illigal memory access korena, and akena "stdin" likhta hoi karon stdin mane holo " standered input orthat keybord theka input nau " */

    printf("Your name is: %s",name);     
    return 0;
}