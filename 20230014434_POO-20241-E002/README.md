# Sistema de Controle de Resultados das Olimpíadas em C++

**Desenvolvido por:** Júlia Moraes da Silva  
**Matrícula:** 20230014434  
**Turma:** Programação Orientada a Objetos

## Descrição do Projeto

Este sistema gerencia informações sobre atletas, modalidades esportivas, medalhas conquistadas e os países representados nas Olimpíadas.

## Estrutura do Projeto

O projeto é composto pelos seguintes arquivos:

- **main.cpp**: Contém a função principal do programa.
- **pais.h**: Cabeçalho da classe `pais`.
- **pais.cpp**: Implementação da classe `pais`.
- **modalidade.h**: Cabeçalho da classe `modalidade`.
- **modalidade.cpp**: Implementação da classe `modalidade`.
- **atleta.h**: Cabeçalho da classe `atleta`.
- **atleta.cpp**: Implementação da classe `atleta`.
- **medalha.h**: Cabeçalho da classe `medalha`.
- **medalha.cpp**: Implementação da classe `medalha`.
- **Makefile**: Arquivo de configuração para compilar o projeto.

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
