# Sistema de Gerenciamento de Campeonato de Futebol

**Desenvolvido por:** Júlia Moraes da Silva  
**Matrícula:** 20230014434  
**Turma:** Programação Orientada a Objetos

## Descrição do Projeto

Este sistema foi feito para gerenciar informações sobre times de futebol, seus respectivos jogadores, os técnicos e técnicos jogadores, os jogos e os resultados dos campeonatos.

## Estrutura do Projeto

O projeto é composto pelos seguintes arquivos:

- **main.cpp**: Contém a função principal do programa.
- **pessoa.h**: Cabeçalho da classe pessoa.
-**pessoa.cpp**: Implementação da classe pessoa.
-**membro_clube.h**: Cabeçalho da classe membro_clube.
-**membro_clube.cpp**: Implementação da classe membro_clube.
-**jogador.h**: Cabeçalho da classe jogador.
-**jogador.cpp**: Implementação da classe jogador.
-**tecnico.h**: Cabeçalho da classe tecnico.
-**tecnico.cpp**: Implementação da classe tecnico.
-**time.h**: Cabeçalho da classe time_futebol.
-**time.cpp**: Implementação da classe time_futebol.
-**jogo.h**: Cabeçalho da classe jogo.
-**jogo.cpp**: Implementação da classe jogo.
-**juiz.h**: Cabeçalho da classe juiz.
-**juiz.cpp**: Implementação da classe juiz.
-**campeonato.h**: Cabeçalho da classe campeonato.
-**campeonato.cpp**: Implementação da classe campeonato.
-**Makefile**: Arquivo de configuração para compilar o projeto.

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