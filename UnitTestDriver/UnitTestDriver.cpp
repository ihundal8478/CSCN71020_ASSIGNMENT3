#include "pch.h"
#include "CppUnitTest.h"
#include "../Game/game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDriver
{
	TEST_CLASS(UnitTestDriver)
	{
	public:
		TEST_METHOD(Rock_on_rock)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_ROCK, STR_ROCK));
		}
		TEST_METHOD(Rock_beats_scissors)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_ROCK, STR_SISSOR));
		}
		TEST_METHOD(Rock_loses_to_Paper)
		{
		     Assert::AreEqual(STR_PLAYER2, playGame(STR_ROCK, STR_PAPER));
		}
		TEST_METHOD(Scissor_beats_Paper)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_SISSOR, STR_PAPER));
		}
		TEST_METHOD(Scissor_loses_to_Rock)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_SISSOR, STR_ROCK));
		}
		TEST_METHOD(Paper_beats_Rock)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_PAPER, STR_ROCK));
		}
		TEST_METHOD(Paper_loses_to_scissors)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_PAPER, STR_SISSOR));
		}
		TEST_METHOD(Scissor_on_Scissor)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_SISSOR, STR_SISSOR));
		}
		TEST_METHOD(Paper_on_Paper)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_PAPER, STR_PAPER));
		}
		TEST_METHOD(invalid_case_player1)
		{
			Assert::AreEqual(STR_INVALID, playGame("rock", STR_ROCK));
		}
		TEST_METHOD(invalid_case_player2)
		{
			Assert::AreEqual(STR_INVALID, playGame("PHONE", "RING"));
		}
	};
}
