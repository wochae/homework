int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	line = NULL;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((line = get_next_line(fd)) > 0)
		{
			printf("%s", line);
			free(line);
		}
		close(fd);
	}
	else
		printf("\n");
	free(line);
	system("leaks a.out");
	return (0);
}
