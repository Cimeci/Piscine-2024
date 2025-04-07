/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:04:51 by yamoisso          #+#    #+#             */
/*   Updated: 2024/07/27 13:05:59 by yamoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = Dict_ft.c Dict_pr itoa.c search.c algo.c main.c
OBJ = $(SRC:.c=.o)

NAME = rush-02

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

Dict_ft.o: Dict_ft.c
	$(CC) -o $@ -c $^ $(CFLAGS)

Dict_pr.o: Dict_pr.c
	$(CC) -o $@ -c $^ $(CFLAGS)

itoa.o: itoa.c
	$(CC) -o $@ -c $^ $(CFLAGS)

search.o: search.c
	$(CC) -o $@ -c $^ $(CFLAGS)

algo.o: algo.c
	$(CC) -o $@ -c $^ $(CFLAGS)

main.o: main.c
	$(CC) -o $@ -c $^ $(CFLAGS)

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all
