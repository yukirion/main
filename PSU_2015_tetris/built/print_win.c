#include "../include/my.h"

void	print_win(WINDOW *win_next, WINDOW *win_game, WINDOW *win_score)
{
  win_score = subwin(stdscr, 10, 10, 10, 0);
  win_game = subwin(stdscr, 20, 10 , 0, 10);
  win_next = subwin(stdscr, 6, 8, 0, 20);
  box(win_score, ACS_VLINE, ACS_HLINE);
  box(win_game, ACS_VLINE, ACS_HLINE);
  box(win_next, ACS_VLINE, ACS_HLINE);
  wrefresh(win_score);
  wrefresh(win_game);
  wrefresh(win_next);
}
