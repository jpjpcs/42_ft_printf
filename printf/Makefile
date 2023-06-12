# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 12:27:05 by jode-jes          #+#    #+#              #
#    Updated: 2023/06/12 16:52:24 by jode-jes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

# ar - create, modify and extract from archives

# rcs 
# c -Create the archive. The specified archive is always created if it did not exist, when you request an update. But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.
# r -Insert the files member... into archive (with replacement). This operation differs from q in that any previously existing members are deleted if their names match those being added.
# s -Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive. You may use this modifier flag either with any operation, or alone. Running "ar s" on an archive is equivalent to running ranlib on it.

# 1. Variables (expl -> NAME (variable) = libft.a (variable value))

NAME = libftprintf.a
SRC = ft_printf.c ft_conversions.c ft_put_aditional_func_1.c ft_put_aditional_func_2.c
# 1.1. Sources to objects: variable bellow
OBJS = ${SRC:.c=.o} # it takes everything that its a source file (.c) and creates object files #transforms every c. file into an o. file(object file)
HEADER = ft_printf.h #creates the name of the header
INCLUDE = -I . #include the headers (the .h files)
CC = cc #run the compiler
RM = rm -f #deletes. forces to delete.
CFLAGS = -Wall -Wextra -Werror #flags of the compiler to check for extra errors/rules when its running.

# 2. pattern rules that specifies how to create an object file using a source file
%.o:%.c #2.1. command to create each object file from the src file. -o $@ (gives the name of the source file) to the $^(object file). This way object file has the same name of the src file. echo is just used to print something...its like printf but in a Makefile.
	${CC} ${CFLAGS} ${INCLUDE} -c -o $@ $^ 
	@echo "\n$@ created" 
$(NAME): ${OBJS} ${HEADER} # 
	@ar rcs ${NAME} ${OBJS} ${HEADER}
	@echo "\n${NAME} created" 

# 2.2. rules/commands to run in the terminal. expl -> all (its the rule) = ${NAME} ... the all depends of the name. When we call it, it will check the rule that was done to the $(NAME). If the src file or header file were changed, it will verify those changes && update the file src.
all: ${NAME}
clean:
	@${RM} ${OBJS} ${OBJS_BONUS}
	@echo "\nObjects deleted"
fclean: clean
	${RM} ${NAME} 
	@echo "\n${NAME} deleted"
re: fclean all

.PHONY: all clean fclean re # 3. phony
