#include <stdio.h>

char* string(char *str)
{
    int i = 0;
    while (str[i])
    {
        while (!(str[i] >= 97 && str[i] <= 122)) 
        {
            i++;        
        }

        if (str[i - 1] == ' ' ||
            str[i - 1] == '\t' ||
            str[i - 1] == '\n' ||
            str[i - 1] == ',' ||
            str[i - 1] == ';' ||
            str[i - 1] == '.' ||
            str[i - 1] == '!' ||
            str[i - 1] == '?' ||
            str[i - 1] == '"' ||
            str[i - 1] == '(' ||
            str[i - 1] == ')' ||
            str[i - 1] == '{' ||
            str[i - 1] == '}' ||
            i == 0)
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char * hello = string(str);
    printf("%s", hello);

}








