#include <stdio.h>

void  ft_swap(int *a, int *b);
void  ft_putchar(char c);
void  ft_putstr(char *str);
int   ft_strlen(char *str);
int   ft_strcmp(char *s1, char *s2);

int main(){
    int a = 19, b = 20;
    int *a1 = &a;
    int *b1 = &b;
    char c = '&';
    char str1[] = "HeLL0    //&&%% w())rld";
    char str2[] = "Chi Da?";
    char str3[] = "a";
    char str4[] = "z";


    printf("____putchartest____\n");
    ft_putchar(c);
    printf("\n");
    printf("____swaptest____\n");
    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
    ft_swap(a1, b1);
    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
    printf("____putstrtest____");
    printf("\n");
    printf("%s", str1);
    printf("\n");
    ft_putstr(str1);
    printf("\n");
    printf("____strlenrtest____");
    printf("\n");
    printf("%s", str2);
    printf("\n");
    ft_strlen(str2);
    printf("%d", ft_strlen(str2));
    printf("\n");
    printf("____strcmprtest____");
    printf("\n");
    printf("%s", str3);
    printf("\n");
    printf("%s", str4);
    printf("\n");
    printf("%d", ft_strcmp(str3, str4));
}
