### Options ###

CC		 := gcc

CPPFLAGS := -Iinclude -MMD -MP
CFLAGS	 := -g -Werror -Wall -Wpedantic
LDFLAGS	 := -Llib
LDLIBS	 := -lm

SRC_DIR	 := src
OBJ_DIR	 := objects
BIN_DIR	 := .
EXECN	 := render

### Files ###

SRC		 := $(wildcard $(SRC_DIR)/*.c)
OBJ		 := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
EXEC	 := $(BIN_DIR)/$(EXECN)

### Rules ###

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJ) | $(BIN_DIR)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@
	@echo "Build successful!"

$(BIN_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(BIN_DIR) $(OBJ_DIR):
	mkdir -p $@

clean:
	@$(RM) -rv $(EXEC) $(OBJ_DIR)

-include $(OBJ:.o=.d)