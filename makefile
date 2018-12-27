CXX=gcc#compilador
CXX_FLAGS=-fsanitize=address -O3 -Wall -Wextra -lm#flags
SRC=distance2.c#arquivo de entrada
PROGRAM_NAME=f.arc #arquivo e formato de saida

$(PROGRAM_NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $@


clean:
	rm -rf $(PROGRAM_NAME)
