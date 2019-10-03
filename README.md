# libft
This project encourages us to re-write highly useful standed functions, understand them, and learn to use them. This library will help us for all our future C projects.
Through this project, we are also given the opportunity to expand the list of functions with our own.

The libft project allows us to build on concepts i.e. how to code a C library and many standard C functions that we are allowed to reuse in all our following C projects. This will save us a lot of precious time since we are forbidden to use any stanard C function unless we coded it ourselves.

## First section
**In this first part, we must re-code a set of the libc functions, as defined in their man. Our functions will need to present the same prototype and behaviors as the originals. Our functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.**
>- memset
>- bzero
>- memcpy
>- memccpy
>- memmove
>- memchr
>- memcmp
>- strlen
>- strdup
>- strcpy
>- strncpy
>- strcat
>- strncat
>- strlcat
>- strchr
>- strrchr
>- strstr
>- strnstr
>- strcmp
>- strncmp
>- atoi
>- isalpha
>- isdigit
>- isalnum
>- isascii
>- isprint
>- toupper
>- tolower

## Second section
**In this second part, we must code a set of functions that are either not included in the libc, or included in a different form.**
>- ft_memalloc
>- ft_memdel
>- ft_strnew
>- ft_strdel
>- ft_strclr
>- ft_striter
>- ft_striteri
>- ft_strmap
>- ft_strmapi
>- ft_strequ
>- ft_strnequ
>- ft_strsub
>- ft_strjoin
>- ft_strtrim
>- ft_strsplit
>- ft_itoa
>- ft_putchar
>- ft_putstr
>- ft_putendl
>- ft_putnbr
>- ft_putchar_fd
>- ft_putstr_fd
>- ft_putendl_fd
>- ft_putnbr_fd

## Bonus Section
**This section we'll be focusing in creating and minupulating a linked list. We’ll use the following structure to represent the links of the list. This structure must be added to your libft.h file.**
```
typedef struct			s_list
{
	void			*content;
	int			content_size;
	struct s_list		*next;
}				t_list;
```

#### List of funtion for the bonus part
>- ft_lstnew
>- ft_lstdelone
>- ft_lstdel
>- ft_lstadd
>- ft_lstiter
>- ft_lstmap
