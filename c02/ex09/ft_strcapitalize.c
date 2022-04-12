char *ft_strcapitalize(char *str)
{
    int i = 0;
    int j ;
    while (str[i] != '\0')
    {
        j = i+1;
        if (((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96 ) || (str[i] >= 123 && str[i] <= 127 )) && ((str[j] >= 97 && str[j] <=122) || (str[j] >= 65 && str[j] <= 90)))
        {
          if (str[j] >= 97 && str[j] <= 122)
          {
            str[j] =str[j] - 32;
            i = j + 1;
          }
          else
            i = j + 1;
        }
        if(str[i] >= 65 && str[i] <= 90)
        str[i] = str[i] +32;
        i++;
    }
    return(str);
}
int main (void)
{
    char str[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
}