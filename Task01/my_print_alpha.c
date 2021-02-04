int my_print_alpha(void)
{
  int i = 97 ;
  while(i >=97 && i <=122)
    {
      my_putchar(i);
      i++;
    }
  my_putchar('\n');
  return(0);
}
