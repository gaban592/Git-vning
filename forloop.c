#include <stdio.h>

const char MyName(){
    char name;
    printf("Enter name: ");
    scanf("%s", &name);
    // getchar();
    return name;
}

int main(){
    // int i = 2;

    // for(i; i <= 10; i++)
    // {
    //     printf("%d ", i);
    // }

    // char[10] name = name("Gabriel");
    // printf("Your name is %s", name)

    const char name = MyName();
    // const char* name = "Flavio";
    printf("Your name is %s.", name);
    
    return 0;
}

