# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 10:41:02 by anferre2          #+#    #+#              #
#    Updated: 2025/04/08 16:33:23 by anferre2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                   Alias                                      #
#==============================================================================#

CC = cc -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -rf

#==============================================================================#
#                                 Files and Paths                              #
#==============================================================================#

NAME = libft.a
SOURCE		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
				ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_memchr.c \
				ft_atoi.c ft_bzero.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
				ft_strrchr.c ft_tolower.c ft_toupper.c ft_memcmp.c ft_strnstr.c \
				ft_calloc.c ft_strdup.c ft_substr.c
OBJ = $(SOURCE:.c=.o)

#==============================================================================#
#                                    Rules                                     #
#==============================================================================#

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GRN)[Libft successfully compiled]$(D)"

clean:
	@$(RM) $(OBJ)
	@echo "$(BCYA)[clean] Objects removed$(D)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BCYA)[fclean] Archive removed$(D)"

re: fclean $(NAME)

.PHONY: all clean fclean re


#==============================================================================#
#                                  UTILS                                       #
#==============================================================================#

# Colors
#
# Run the following command to get list of available colors
# bash -c 'for c in {0..255}; do tput setaf $c; tput setaf $c | cat -v; echo =$c; done'
#
B  		= $(shell tput bold)
BLA		= $(shell tput setaf 232)
RED		= $(shell tput setaf 196)
GRN		= $(shell tput setaf 82)
YEL		= $(shell tput setaf 226)
BLU		= $(shell tput setaf 4)
MAG		= $(shell tput setaf 201)
CYA		= $(shell tput setaf 6)
WHI		= $(shell tput setaf 7)
GRE		= $(shell tput setaf 8)
BRED 	= $(shell tput setaf 9)
BGRN	= $(shell tput setaf 10)
BYEL	= $(shell tput setaf 11)
BBLU	= $(shell tput setaf 12)
BMAG	= $(shell tput setaf 13)
BCYA	= $(shell tput setaf 14)
BWHI	= $(shell tput setaf 15)
D 		= $(shell tput sgr0)
BEL 	= $(shell tput bel)
CLR 	= $(shell tput el 1)
