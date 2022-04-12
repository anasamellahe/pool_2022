#include<unistd.h>
void ft_printaddres(void *addr)
{
    long addr_dec  = (long)addr;
    char addr_hex[16];
    int i = 0;
    while(addr_dec > 0)
    {
        addr_hex[i] = addr_dec % 16;;
        if (addr_hex[i] < 10)
        addr_hex[i] +='0';
        else
            addr_hex[i] +=87;
        i++;
        addr_dec = addr_dec / 16;
    }
    while(i > 16)
    {
    addr_hex[i] = '0';
    i++;
    }
    i -= 1;
    while(i >= 0)
    {
        write(1,&addr_hex[i],1);
        i--;
    }
}
void ft_printline(char *addr)
{
    int index = 0;
    while(index <= 16 && *addr+index != '\0' )
    {
        addr+= index;
        if(*addr >= 0 && *addr <= 31)
            write(1,".",1);
        else    
            write(1,addr,1);
        index++;
    }

}
void ft_printlineashex(char *addr )
{
    char hex[2];
    
    int dec = *addr;
    int a = 0;
    int i = 0;
    while(dec > 0)
    {
        hex[i] = dec % 16;
        if(hex[i] > 9)
          hex[i] += 87;
        else
            hex[i] += '0';
        dec = dec / 16;
        i++;
        a++;
    }
    if(a < 2)
        hex[i] = '0';
    i = 0;
    while(i  < 2)
    {
        write(1,&hex[i],1);
        i++;
    }
}
void    *ft_print_memory(void *addr, unsigned int size)
{
    _Bool is0 = 1;
    int is16 = 0;
    int toprintline;
    int is2 = 0;
    unsigned int index = 0;
    while (index < size)
    {
        if(is0 == 1)
        {
        ft_printaddres(addr + index);
        write(1,":",1);
        write(1," ",1);
        is0 = 0;
        }
        if(is16 <= 16)
        {
            ft_printlineashex(addr+index);
            is2++;
            if(is2 >= 2)
            {
                write(1," ",1);
                is2 = 0;
            }
            is16++;
        }
        toprintline = index - 16;
        if(is16 == 16 || index == size-1)
        {
          ft_printline(addr+toprintline);
        }
        

        if(is16 == 16)
        {
            write(1,"\n",1);
            is0 = 1;
            is16 = 0;
        }   
        index++;
    }
}
int main() {
  char a[] ="ana an";
  //ft_add(a + 0);
  ft_print_memory(a,6);

  return 0;
}