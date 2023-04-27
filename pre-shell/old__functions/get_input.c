
if (getline(&input, &len, stdin) == -1)
{
    printf("Error\n");
    return (NULL);
}
return (string_parse(input, counter(input)));
}