# Variáveis
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Arquivos fonte
SOURCES = main.cpp pais.cpp modalidade.cpp atleta.cpp medalha.cpp

# Arquivos objeto
OBJECTS = $(SOURCES:.cpp=.o)

# Nome do executável
EXEC = olimpicos

# Regra padrão
all: $(EXEC)

# Linkagem
$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJECTS)

# Compilação dos arquivos .cpp para .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
	rm -f $(OBJECTS) $(EXEC)

# Recompilar do zero
rebuild: clean all
