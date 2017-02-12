#include <stdio.h>
#include <string.h>

int main(void)
{
//    const char* str = "hello world, friend of mine!";
//    const char* sep = " ,!";

//    unsigned int cnt = 0;
//    do {
//       str = strpbrk(str, sep); // find separator
//       printf("1. String is %s\n", str);
//       if(str) str += strspn(str, sep); // skip separator
//       ++cnt; // increment word count
//       printf("2. String is %s\n", str);
//    } while(str && *str);

//    printf("There are %d words\n", cnt);
//    printf("String is %s\n", str);

    const char* name = "Rakesh, is having a good time.";
    printf("%s", name + strcspn(name, ","));

    return 0;
}
