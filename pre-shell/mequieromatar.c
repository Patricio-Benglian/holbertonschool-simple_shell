int shelly(void)
{
    char *args[];

    if (getline(&input, &len, stdin) == -1)
    {
        printf("Error\n");
        free(input);
        exit(0);
    }
    
}
int main(void)
{
    while (1)
    {
        printf("$ ");
        shelly();
    }
    return (-1)
}