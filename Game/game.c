#include<string.h>
#include "game.h"

const char* playGame(const char* player1Shape, const char* player2Shape)
{

	if (strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_ROCK) == 0)
		return STR_DRAW;

	if (strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_SISSOR) == 0)
		return STR_PLAYER1;

	if (strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_PAPER) == 0)
		return STR_PLAYER2;

	if (strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_PAPER) == 0)
		return STR_PLAYER1;

	if (strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_ROCK) == 0)
		return STR_PLAYER2;

	if (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_ROCK) == 0)
		return STR_PLAYER1;

	if (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_SISSOR) == 0)
		return STR_PLAYER2;

	if (strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_SISSOR) == 0)
		return STR_DRAW;

	if (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_PAPER) == 0)
		return STR_DRAW;

	return STR_INVALID;
}

int main()
{
	return 1;
}
