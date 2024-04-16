


void ft_putnbr_fd(int n, int fd)
{
        char digit;
        if(n < 0)
        {
                if(n == -2147483648)
                {
                        write(fd,"-",1);
                        ft_putchar_fd(-n,fd);
                }
        n *= -1;
        }
                if(n < 10)
                {
                        write(fd,&n,1);
                }
                else if( n >= 10)
                {
                        ft_putnbr_fd(n / 10, fd);
                        digit = n % 10 + '0';
                        write(fd,&digit,1);
                }
        
}