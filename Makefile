# Nombre de la librería
NAME = libft.a

# Directorio donde se encuentran los archivos fuente (.c)
SRCS_DIR = .

# Directorio donde se encuentran los archivos de encabezado (.h)
INCLUDES_DIR = .

# Archivos fuente que contienen las funciones
SRCS = $(SRCS_DIR)/ft_isalnum.c $(SRCS_DIR)/ft_isalpha.c $(SRCS_DIR)/ft_isdigit.c $(SRCS_DIR)/ft_isascii.c $(SRCS_DIR)/ft_isprint.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_memset.c $(SRCS_DIR)/ft_bzero.c $(SRCS_DIR)/ft_memcpy.c $(SRCS_DIR)/ft_memmove.c $(SRCS_DIR)/ft_strlcpy.c $(SRCS_DIR)/ft_strlcat.c $(SRCS_DIR)/ft_toupper.c $(SRCS_DIR)/ft_tolower.c $(SRCS_DIR)/ft_strchr.c $(SRCS_DIR)/ft_strrchr.c $(SRCS_DIR)/ft_strncmp.c $(SRCS_DIR)/ft_memchr.c $(SRCS_DIR)/ft_memcmp.c $(SRCS_DIR)/ft_strnstr.c $(SRCS_DIR)/ft_atoi.c $(SRCS_DIR)/ft_calloc.c $(SRCS_DIR)/ft_strdup.c $(SRCS_DIR)/ft_substr.c $(SRCS_DIR)/ft_strjoin.c $(SRCS_DIR)/ft_strtrim.c $(SRCS_DIR)/ft_split.c $(SRCS_DIR)/ft_itoa.c $(SRCS_DIR)/ft_strmapi.c $(SRCS_DIR)/ft_striteri.c $(SRCS_DIR)/ft_putchar_fd.c $(SRCS_DIR)/ft_putstr_fd.c $(SRCS_DIR)/ft_putendl_fd.c $(SRCS_DIR)/ft_putnbr_fd.c

# Archivos objeto generados a partir de los archivos fuente (.c)
OBJS = $(SRCS:.c=.o)

# Compilador a utilizar
CC = gcc

# Flags de compilación
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_DIR)

# Regla por defecto, se ejecuta al invocar "make"
all: $(NAME)

# Regla para crear la librería (solo se recompila si los archivos objeto cambian)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Regla para compilar archivos .c en archivos .o (solo recompila si el archivo .c cambia)
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto generados
clean:
	rm -f $(OBJS)

# Regla para limpiar los archivos objeto y la librería generada
fclean: clean
	rm -f $(NAME)

# Regla para eliminar todos los archivos generados y volver a compilar todo desde cero
re: fclean all

# Ejemplos:
# make clean    -> Elimina los archivos .o
# make fclean   -> Elimina los archivos .o y la librería
# make re       -> Elimina todo y recompila todo
# make test     -> Compila la librería, compila main.c, y ejecuta el programa
