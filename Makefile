NAME	=	libid.a
SRCS	=	$(wildcard *.c)
CFLAGS	=	-W -Wall -Werror
CC	=	gcc
OBJS	=	$(SRCS:.c=.o)
AR	=	ar
RANLIB	=	ranlib

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) r $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

clean:
	rm -f $(OBJS)

distclean:	clean
	rm -f $(NAME)

rebuild:	distclean all
