#include <windows.h>
#include <stdio.h>


int main(int argc, char *argv[]){
    HANDLE hprocess;
    DWORD pId;
    if(argc < 2){
        fprintf(stderr,"[-] Too few arguments");
        return -1;
    }
    else
        {
        pId = atoi(argv[1]);
        hprocess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pId);
        if(hprocess == NULL){
            fprintf(stderr,"[-] Can't open the process because %o\n",GetLastError);
            Sleep(5000);
            return -1;

        }
        else{
            printf("[!] WE DID IT!\nTHIS IS THE HANDLE OF THE PROCESS(%d) -> 0x%lX",pId, hprocess);
    		Sleep(5000);
    		return 0;
	    }
    CloseHandle(hprocess);
    }
}

