#include<string.h>
#include "game.h"

const char* playGame(const char* player1Shape, const char* player2Shape)
{

	if (strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_ROCK) == 0) //both players plays rock so game become draw
		return STR_DRAW;

	if (strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_SISSOR) == 0) // player1 plays rock and player2 plays scissor, player1 wins
		return STR_PLAYER1;

	if (strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_PAPER) == 0) //player1 plays rock and player2 plays paper, player2 wins
		return STR_PLAYER2;

	if (strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_PAPER) == 0)//player1 plays scissor and player2 plays paper, player1 wins
		return STR_PLAYER1;

	if (strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_ROCK) == 0)//player1 plays scissor and player2 plays rock, player2 wins
		return STR_PLAYER2;

	if (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_ROCK) == 0)//player1 plays paper and player2 plays rock, player1 wins
		return STR_PLAYER1;

	if (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_SISSOR) == 0)//player1 plays paper and player2 plays scissor, player2 wins
		return STR_PLAYER2;

	if (strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_SISSOR) == 0)//both players plays scissor so game become draw
		return STR_DRAW;

	if (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_PAPER) == 0)//both players plays paper so game become draw
		return STR_DRAW;

	return STR_INVALID;
}

int main()
{
	return 1;
}
