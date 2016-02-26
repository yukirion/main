#include "../include/my.h"

void	tetris_default()
{
  WINDOW	*win_game;
  WINDOW	*win_score;
  WINDOW	*win_next;

  initscr();
  print_win(win_next, win_game, win_score);
  getch();
  endwin();
  free(win_game);
  free(win_score);
  free(win_next);
}

int	main(char **av, int ac)
{
  tetris_default();
  return (0);
}
