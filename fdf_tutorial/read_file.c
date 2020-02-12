#include "fdf.h"

int     get_hight(char *file_name)
{
	char *line;
	int fd;
	int height;

	fd = open(file_name, O_RDONLY, 0);
	height = 0;
	while(get_next_line(fd, &line))
	{
		height++;
//		free(line);
	}
	close(fd);
	return (height);
}

int     get_width(char *file_name)
{
	int width;
	int fd;
	char *line;
	char **line2;

	width = 0;
	fd = open(file_name, O_RDONLY, 0);
	get_next_line(fd, &line);
	line2 = ft_strsplit(line, ' ');
	fd = 0;
	while(line2[fd])//хз будет ли работать
	{
		width++;
//		free(line2[fd]);
		fd++;
//
	}
//	free(line2);
//	free(line);
	return (width);
}
void    fill_matrix(int *z_line, char *line)
{
	char **nums;
	int i;

	nums = ft_strsplit(line, ' ');
	i = 0;
	while(nums[i])
	{
		z_line[i] = ft_atoi(nums[i]);
//		free(nums[i]);
		i++;
	}
//	free(nums);
}

void    read_file(char *file_name, fdf *data)
{
	int     fd;
	char    *line;
	int     i;

	data->height = get_hight(file_name);
	data->width = get_width(file_name);
	data->z_matrix = (int **)malloc(sizeof(int*) * (data->height + 1));
	i = 0;
	while (i < data->height)
		data->z_matrix[i++] = (int*)malloc(sizeof(int) * (data->width + 1));
	fd = open(file_name, O_RDONLY, 0);
	i = 0;
	while(get_next_line(fd, &line))
	{
		fill_matrix(data->z_matrix[i], line);
//		free(line);
		i++;
	}
	close(fd);
	data->z_matrix[i] = NULL;
}