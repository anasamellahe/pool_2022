#include<unistd.h>
#include<stdio.h>

 void ft_line(char  *addr)
{
  int a = *addr;
  char hex;
  while(a > 0)
  {
    a = a %  16;
    if (a <   10)
    {
    hex = a +'0';
      write(1,&hex,1);
    }
    else {
      hex = a + 87;
      write(1,&hex,1);
    }
    a = a /  16;
  }    
}
void     ft_add(void *addr)
{
    char addtohex[16];
    int i = 0;
    long add =  (long)addr;
    //printf("%p \n",addr);
    while(add > 0)
    {
        addtohex[i] = add % 16;
        if(addtohex[i] < 10)
            addtohex[i] += '0';
        else
            addtohex[i] += 87;
        i++;
        add = add / 16;
    }
    while(i < 16)
    {
        addtohex[i] = '0';
        i++;
    }
    i -=1;
    while(i >= 0)
    {
        write(1,&addtohex[i],1);
        i--;
    }


}
void    *ft_print_memory(void *addr, unsigned int size)
{
    int i = 0;
    int a = 0;
    int b = 1;
    while( (unsigned)i < size)
    {
        if( a == 0)
        {    
            ft_add(addr + i);
            write(1,":",1);
            write(1," ",1);
        }
        while( a < 16)
        {
            if (b <= 2)
            {
                ft_line(addr + i);
                b++;
            }
            else
            {
                write(1," ",1);
                b = 1;
                i -=1;
                a -=1;
            }
            a++;
            i++;
        }
        write(1," ", 1);
       //ft_linechar(addr+i);
        write(1,"\n",1);
        a = 0;  
    }
}
int main() {
  char a[] ="ana anasahgliijhskoiehgdjuyetfghuracjhdkll";
  //ft_add(a + 0);
  ft_print_memory(a,42);

  return 0;
}