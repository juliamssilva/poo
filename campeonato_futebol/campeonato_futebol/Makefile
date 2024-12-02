# Makefile para o Sistema de Gerenciamento de Campeonato de Futebol

# Diretórios
INCLUDE_DIR = include
SRC_DIR = src
BUILD_DIR = build

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I$(INCLUDE_DIR)

# Arquivos de cabeçalho e código-fonte
HEADERS = $(wildcard $(INCLUDE_DIR)/*.h)
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

# Objetos gerados para cada arquivo-fonte
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

# Nome do executável
EXEC = campeonato_futebol

# Alvo padrão para compilar todo o projeto
all: $(BUILD_DIR) $(EXEC)

# Cria o diretório build, caso não exista
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)  # Esta linha deve começar com uma tabulação

# Gera o executável a partir dos objetos
$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^  # Esta linha deve começar com uma tabulação

# Regra para compilar os arquivos-fonte em arquivos-objeto
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@  # Esta linha deve começar com uma tabulação

# Limpeza dos arquivos compilados
clean:
	rm -rf $(BUILD_DIR) $(EXEC)  # Esta linha deve começar com uma tabulação

# Executa o programa após compilar
run: all
	./$(EXEC)  # Esta linha deve começar com uma tabulação

# Recompila o projeto
rebuild: clean all
