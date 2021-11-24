#include <ncurses.h>
#include <windows.h>
#include <string>
using namespace std;
int main(){		
	initscr();
	char huruf_k[]= {"alkhadafi saddam simparico"};

start_color();
	init_pair(1, COLOR_RED, COLOR_WHITE);
	
attron(COLOR_PAIR(1));
for(int a=1;a<=26;a++){
huruf_k[a-1]=toupper(huruf_k[a-1]);
printw(huruf_k);
refresh();
huruf_k[a-1]=tolower(huruf_k[a-1]);
Sleep(400);
clear();
}
attroff(COLOR_PAIR(1));
	
getch();
endwin();
}
