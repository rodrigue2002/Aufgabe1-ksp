#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]){
    //le deuxieme point du devoir 
    for(int i = 0; i < argc; i++){
         // le premier point du devoir
        if(argc ==1){    // si on ne met rien en argument donc la longeuur du tableau correspond a la longueur du fichier du code compilé donc 1
            printf("Ninja Virtual Machine started\n");
            printf("Ninja Virtual Machine stopped\n");
        }
        //implementation du troisieme point
        else if(strcmp(argv[1],"--help")==0){
            printf("%s\n", "usage: ./njvm [option] [option] ...\n --version\t\t show version and exit\n --help\t\t\t show this help and exit" );
        }
        else if(strcmp(argv[1],"--version") == 0){
            printf("%s %s %s %s %s ", "Ninja Virtual Machine version 0  (compiled ", __DATE__,",", __TIME__,")");
        } 

        else {
            printf( "%s %s %s %s %s", "unknown command line argument", "'",argv[1],"'", "try './njvm --help'");
        }
        //printf("%s\n", argv[i]);  fait partir du deuxieme point pour ausgeben les commandozeilenargumente
        break;
    }

}

/*./njvm --foo
unknown command line argument '--foo', try './njvm --help'
$ ./njvm bar
unknown command line argument 'bar', try './njvm --help'
1*/

