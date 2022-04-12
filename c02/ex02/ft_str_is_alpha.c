int ft_str_is_alpha(char *str)
{
    int i = 0;
    while( str[i] != '\0')
    {
        if((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' ||  str[i] > 'Z'))
        return(0);
        i++;
    }
    return (1);
}  
int main (voiid)
{
  char a[10] = "";
  int i = ft_str_is_alpha(a);
}