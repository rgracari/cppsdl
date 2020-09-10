# ============= VAR =============

CXX = c++ -std=c++17
# CFLAGS = -Wall -Wextra
CFLAGS = 

INCFLAGS = -I C:\vclib\SDL2-mingw\x86_64-w64-mingw32\include\SDL2
LDFLAGS = -L C:\vclib\SDL2-mingw\x86_64-w64-mingw32\lib
LDLIBS = -lmingw32 -lSDL2main -lSDL2

EXEC = prog.exe
BIN_PATH = bin
BIN_INT_PATH = bin-int
SRC_PATH = src
SDX_PATH = sandbox

SBX_INCFLAGS = -I $(SRC_PATH)/ 
SBX_LDFLAGS = -L $(BIN_PATH)/
SBX_LDLIBS = -lcppsdl

RM = del

# SRC := $(wildcard $(SRC_PATH)/*.c)
# OBJ := $(SRC:$(SRC_PATH)/%.c=$(BIN_INT_PATH)/%.o)

# ============= LIB =============

lib: $(BIN_PATH)/libcppsdl.a

$(BIN_PATH)/libcppsdl.a: $(BIN_INT_PATH)/cppsdl.o
	@ar rcs $(BIN_PATH)/libcppsdl.a $(BIN_INT_PATH)/cppsdl.o

$(BIN_INT_PATH)/cppsdl.o: $(SRC_PATH)/cppsdl.cpp $(SRC_PATH)/cppsdl.h
	@g++ -c $(SRC_PATH)/cppsdl.cpp -o $(BIN_INT_PATH)/cppsdl.o

# $(CFLAGS) $(INCFLAGS) $(LDFLAGS) $(LDLIBS) 

# ============= PRG =============

sandbox: $(BIN_PATH)/$(EXEC)
	@./$(BIN_PATH)/$(EXEC)

$(BIN_PATH)/$(EXEC): $(BIN_INT_PATH)/main.o
	@$(CXX) $(BIN_INT_PATH)/main.o -o $@ $(CFLAGS) $(SBX_INCFLAGS) $(SBX_LDFLAGS) $(SBX_LDLIBS) 

$(BIN_INT_PATH)/main.o: $(SDX_PATH)/main.cpp lib
	@$(CXX) -c $(SDX_PATH)/main.cpp -o $(BIN_INT_PATH)/main.o $(CFLAGS) $(SBX_INCFLAGS) $(SBX_LDFLAGS) $(SBX_LDLIBS)

# ============= ASS =============

.PHONY: clean mrproper dir all sandbox

clean:
	@$(RM) $(BIN_INT_PATH)\*.o

mrproper: clean
	@$(RM) $(BIN_PATH)\$(EXEC)
	@$(RM) $(BIN_PATH)\*.a

dir:
	@mkdir $(BIN_PATH)
	@mkdir $(BIN_INT_PATH)

# $(EXEC): $(OBJ)
# 	$(CC) -o $(BIN_PATH)/$(EXEC) $^ $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

# $(BIN_INT_PATH)/%.o: $(SRC_PATH)/%.c
# 	$(CC) -o $@ $(CFLAGS) $< $(CPPFLAGS) $(LDFLAGS)
