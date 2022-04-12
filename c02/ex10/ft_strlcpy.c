unsigned int strling(char *str)
{
  unsigned int i = 0;
  while (str[i] != '\0')
    i++; 
  return(i);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{ 
  unsigned int l = strling(src);
  unsigned int i = 0;
  if(size != 0)
  {
    while( i < size -1 && src[i] != '\0'  )
    {
      dest[i] = src[i];
      i++;
    }
  }
  dest[i] = '\0';
  return(l);

}
int main(void)
{
  char src[] = "hello anas";
  char dest[15];
  ft_strlcpy(dest,src,14);
}