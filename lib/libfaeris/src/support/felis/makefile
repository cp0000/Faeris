# Normal Information 
CC=gcc
FLAGS= -g -Wall -Werror -DLINUX
FILE_EXT=cc

#Project infor 
PROJECT_PATH=../../build/linux/
PROJECT=script

# User Config Information 
LIB_DIR=$(PROJECT_PATH)lib
OBJ_DIR=$(PROJECT_PATH)obj
SRC_DIR=./
INCLUDE_DIR= -I./ -I../

#Source File 
SRC=  sl_comment.cc \
	  sl_double_quote_str.cc \
	  sl_simple_str.cc \
	  sl_single_quote_str.cc \
	  sl_specific_symbol.cc \
	  sl_top.cc \
	  sl_white_space.cc \
	  xir_file.cc \
	  xir_grammer.cc \
	  xir_parser.cc \
	  xir_scanner.cc \
	  xir_token.cc \
	


#full src name 
SRC_NAME_WITH_PATH=$(addprefix $(SRC_DIR)/,$(SRC))

#obj name 
OBJ_NAME=$(SRC:%.$(FILE_EXT)=%.o) 
OBJ_NAME_WITH_PATH=$(addprefix $(OBJ_DIR)/,$(OBJ_NAME))




main:$(LIB_DIR)/lib$(PROJECT).a

$(LIB_DIR)/lib$(PROJECT).a: $(OBJ_NAME_WITH_PATH) 
	ar cr $@ $(OBJ_NAME_WITH_PATH)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.$(FILE_EXT)
	$(CC) $(FLAGS) -c -o $@ $< $(INCLUDE_DIR) 


#extend  your own here 
xir_grammer.cc:xir_grammer.y 
	bison xir_grammer.y -o xir_grammer.cc
