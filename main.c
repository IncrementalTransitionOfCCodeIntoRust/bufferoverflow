#include <stdio.h>
#include <string.h>

int matches(const char* pw, char* upw, char* msg)
{
    printf(msg);
    scanf("%s", upw);
    return strcmp(pw, upw) == 0;
}

int pw_matches(const char* pw, char* upw)
{
    if (matches(pw, upw, "enter password: ")) return 1;
    else return matches(pw, upw, "wrong, one more try: ");
}

int main()
{
    char user_password[16];
    const char password[16] = "secretpw";

    pw_matches(password, user_password) ?
        printf("access granted!\n") :
        printf("access denied.\n");
}
