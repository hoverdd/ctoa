CC = gcc
CFLAGS = -Wall -Wextra -O2

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, build/%.o, $(SRC))

PROGRAM_NAME = ctoa

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(PROGRAM_NAME)

# create dirs (src/client/client.c, src/server/server.c)
build/%.o: src/%.c 
	@mkdir -p $(dir $@) 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build $(LIB_NAME) 