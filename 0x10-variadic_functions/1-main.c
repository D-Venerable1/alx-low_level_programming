
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
