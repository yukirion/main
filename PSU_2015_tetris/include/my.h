#ifndef MY_H_
# define MY_H_

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <ncurses.h>

/*
**------ src ------
*/
void	tetris_default();


/*
**------ built ------
*/
void print_win(WINDOW *win_next, WINDOW *win_game, WINDOW *win_score);

#endif
