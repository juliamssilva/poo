# Sistema de Gerenciamento de Campeonato de Futebol

**Desenvolvido por:** Júlia Moraes da Silva  
**Matrícula:** 20230014434  
**Turma:** Programação Orientada a Objetos

## Descrição do Projeto

Este sistema foi feito para gerenciar informações sobre salas comerciais em um prédio. Ele permite associar empresas locatárias às salas, gerenciar suas informações e fornecer uma interface para adicionar, remover e listar salas e empresas.

## Estrutura do Projeto

O projeto é composto pelos seguintes arquivos:

-**main.cpp**: Contém a função principal do programa.
-**empresa.h**: Cabeçalho da classe empresa.
-**empresa.cpp**: Implementação da classe empresa.
-**sala.h**: Cabeçalho da classe sala (abstrata).
-**sala.cpp**: Implementação da classe sala.
-**sala_privativa.h**: Cabeçalho da classe sala_privativa, que herda de sala.
-**sala_privativa.cpp**: Implementação da classe sala_privativa.
-**sala_compartilhada.h**: Cabeçalho da classe sala_compartilhada, que herda de sala.
-**sala_compartilhada.cpp**: Implementação da classe sala_compartilhada.
-**predio_comercial.h**: Cabeçalho da classe predio_comercial.
-**predio_comercial.cpp**: Implementação da classe predio_comercial.
-**Makefile**: Arquivo de configuração para compilar o projeto

## Compilação

1. **Navegue até o diretório** onde os arquivos de código e o `Makefile` estão localizados.

2. **Compile o projeto** executando o comando:
    
    make
    

3. **Execute o programa** após a compilação bem-sucedida:
    - **No Linux/macOS**: 

      ./nome_do_arquiv

    - **No Windows**:
    
      nome_do_arquivo.exe
    

4. **Para remover os arquivos objeto e o executável gerado**, você pode usar o comando:

    make clean


## Observações

- **Instalação do `make`**:
  - **No Linux**: Pode ser instalado através do gerenciador de pacotes (`sudo apt-get install make` para Debian/Ubuntu, `sudo dnf install make` para Fedora, etc.).
  - **No macOS**: Instale como parte das ferramentas de linha de comando do Xcode com o comando `xcode-select --install`.
  - **No Windows**: Utilize ferramentas como MinGW ou Cygwin para obter o `make`.