// George Alexandre Gantus                            nUSP: 10691988
// Pedro Paulo Herzog Junior                          nUSP: 10284692
// Vinícius Molina Garcia                             nUSP:  8929296

//Neste codigo faremos o uso das system calls getpid,getgid e fork todas relacionadas a gerenciamento de processos
//getpid retorna o id do processo - getpid(void)
//getgid retorna o id do grupo de processos - getgid(void)
//fork cria um novo processo do zero, rodando o mesmo programa do codigo a partir do fork
#include <stdio.h>
#include <stdlib.h>
#include<sys/wait.h> 
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    fork();//cria o novo processo
    int id = getpid();//recebe o id do processo
    int ide = getgid();//recebe o id do grupo de processos
    //printa os dados obtidos
    printf("O id do processo é: %d. O id do grupo de processos é: %d \n",id,ide);
    wait(NULL);
    return 0;
        
}
