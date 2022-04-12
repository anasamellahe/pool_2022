#include<unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
void if_the_number_is1()
{
    int i = 0;
    char itc;
    while (i < 10 )
    {
        itc = i + 48;
        ft_putchar(itc);
        if(i != 9)
        {
        ft_putchar(',');
        ft_putchar(' ');
        }
        i++;
    }
}
void intch(int *tab , int n) // snd a char to the ft_putchar function
{
    int i = 0;
    char c =',';
    char s =' ';
    char itc; //  change integer to charcter
    int size = n -1; // the lsast index contine value in the tab
    while(i <= size) // loop in to a tab
    {
        itc = tab[i] + 48; // add 48 to the number to changeit to char
        ft_putchar(itc);
        i++;
    }

}
int check(int *tab, int size2) // check if the tab 
{
    int i; // index
    int fixsize2 = size2; //   fix value to uset insted size2
    int j =  size2 -1; // a variable to chek the value befor the last value 
    int fixj ; // fix value to uset insted j
    while(1)// infinty loop
    {
        if(tab[size2] == tab[j] +1)
        {
            size2--; 
            j--;
        }
        if(j >= 0)
        {
          if (tab[size2] != tab[j] + 1 )
          {
            tab[j]++;
            fixj = j;
            fixj ++;
            while(fixj <= fixsize2)
            {
                tab[fixj] = tab[fixj -1] +1;
                fixj++;
            } 
            return (2); // return value for continue the loop
          }
        }
        if (size2 ==  0 && tab[size2] +1 == tab[size2 +1] && tab[fixsize2] == 9){
            return(1);// return value for stop the loop
            }
    }
}
void ft_print_combn(int n) 
{

    int tab[9];  // tab countine all the number from 0 - 9
    int i = 0;// index ;
    int retu;//var counten the return value from the check function
    int size = n -1;// the last index in the tab
    int j = size -1; // the index befor size
    if(n < 1 || n > 9){
        return;
    }
    if (n == 1)
    {
        if_the_number_is1();
        return;
    }
    while(i < n) //loop   to put all the number in the tab
    {
        tab[i] = i;
        i++;
    }
    i = 0; // reset the value of the index 
    while(1)// infinty loop
    {
        intch(tab,n);// declaration 
        if(tab[size] < 9 )
            tab[size]++;
        else if(tab[size] == 9 && tab[j] + 1 != tab[size])
        {
            tab[j]++;
            tab[size] = tab[j]+1;
        }
        else if(tab[size] == 9 && tab[j] +1 == tab[size])
        {
            retu = check(tab,size);
            
            if(retu == 1){
            break;
            }
        }
        ft_putchar(','); //priint ',' after the number and stop in the last comb 
        ft_putchar(' ');//print ' ' after the number and stop in the last com
    }
}
int main (void)
{
    ft_print_combn(9);
}
