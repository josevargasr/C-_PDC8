#include <ncurses.h>
using namespace std;
int main()
{
    int MaxY, MaxX;
    initscr();
    getmaxyx(stdscr, MaxY, MaxX);
    int valid = 0;
    noecho();
    while (valid != 27)
    {
        //Ventana 1
        WINDOW *ventana = newwin(MaxY / 2, MaxX / 2, 0, 0);
        start_color();
        box(ventana, 0, 0);
        refresh();
        wrefresh(ventana);
        valid = getch();
        if (valid == 27)
            break;

        wclear(ventana);
        wrefresh(ventana);
        //Ventana 2
        ventana = newwin(MaxY / 2, MaxX / 2, 0, MaxX / 2);
        box(ventana, 0, 0);
        wrefresh(ventana);
        valid = getch();
        if (valid == 27)
            break;
        wclear(ventana);
        wrefresh(ventana);
        //Ventana 3
        ventana = newwin(MaxY / 2, MaxX / 2, MaxY / 2, 0);
        box(ventana, 0, 0);
        wrefresh(ventana);
        valid = getch();
        if (valid == 27)
            break;
        wclear(ventana);
        wrefresh(ventana);
        //Ventana 4
        ventana = newwin(MaxY / 2, MaxX / 2, MaxY / 2, MaxX / 2);
        box(ventana, 0, 0);
        wrefresh(ventana);
        valid = getch();
        if (valid == 27)
            break;
        wclear(ventana);
        wrefresh(ventana);
    }
    endwin();
    return 0;
}