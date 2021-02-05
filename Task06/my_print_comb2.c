int my_print_comb(void)
{
  int a = 48, b = 48, c = 48, d = 48;

while (a <= 57)
{
    while(b <= 57)
    {
      while (c <= 57)
        {
            while(d <= 57)
            {
                if (d > b && c >= a)
                {
                    my_putchar(a);
                    my_putchar(b);
                    my_putchar(' ');
                    my_putchar(c);
                    my_putchar(d);
                    my_putchar(',');
                    my_putchar(' ');
                }
                d++;
            }
            d = 48;
            c ++;
        }
        c = 48;
        b ++;
    }
    b = 48;
    a ++;
}
 return(0);
}
