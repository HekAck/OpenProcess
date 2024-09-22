# OpenProcess

## A simple OpenProcess code.
Um código simples na qual abre um processo e apresentar seu Pid e valor hexadecimal do handle.
Eu fiz isso quando estava entediado então possivelmente eu tenha passado alguma prática ruim aqui.

Caso queira recriar o código use a [documentação do site da microsoft](https://learn.microsoft.com/en-us/windows/win32/api/) e seja feliz :)

## Como usar
1. **Compile o código:**
```
C:\> gcc OpenProcesso.c -o OpenProcesso.exe
```
**Obs: Usei esse comando para compilar o código, caso não tenha o compilador recomendo que instale o mingw e adicione-o à "Váriaveis  de ambiente" do seu Windows. [Vídeo explicativo](https://www.youtube.com/watch?v=BKsdbwGEsDM).**

2. **Rode o código passando o Process Id como parâmetro:**
Usei um Pid imaginário, que foi 1492, ele não remete à nenhum processo especifíco e foi usado apenas como exemplo.
```
C:\> OpenProcesso.exe 1492
```

## Resultado Esperado
```
C:\> Openprocesso.exe 1492
[!] WE DID IT!
[!] THIS IS THE HANDLE OF THE PROCESS(1492) -> 0xE2

```
Após isso, se passará 5 segundos e a handle será fechada e o código será finalizado.
