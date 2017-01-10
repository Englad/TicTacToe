// ttt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

char board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
bool turn = true;
bool gameOver = false;

void showBoard() {
	std::cout << "\nTic Tac Toe board\n\n";

	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 3; column++) {
			std::cout << board[row][column];
		} 
		std::cout << std::endl;
	}
}

int checkWin() {
	if (board[0][0] == board[0][1] && board[0][1] == board[0][2] || board[0][0] == board[1][0] && board[1][0] == board[2][0]) {
		std::cout << "congratulations you win";
		gameOver = true;
		std::cin.get();
		return 0;
	}
	if (board[0][1] == board[1][1] && board[1][1] == board[2][1] || board[1][0] == board[1][1] && board[1][1] == board[1][2]) {
		std::cout << "congratulations you win";
		gameOver = true;
		std::cin.get();
		return 0;
	}
	if (board[0][2] == board[1][2] && board[1][2] == board[2][2] || board[2][0] == board[2][1] && board[2][1] == board[2][2]) {
		std::cout << "congratulations you win";
		gameOver = true;
		std::cin.get();
		return 0;
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
		std::cout << "congratulations you win";
		gameOver = true;
		std::cin.get();
		return 0;
	}
}

void makeChoiceX() {
	int choice;


	std::cout << "\nPlease select the number to replace your X\n";
	std::cin >> choice;

	switch (choice) {
	case 1:
		if (board[0][0] == '1') {
			board[0][0] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 2:
		if (board[0][1] == '2') {
			board[0][1] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 3:
		if (board[0][2] == '3') {
			board[0][2] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 4:
		if (board[1][0] == '4') {
			board[1][0] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 5:
		if (board[1][1] == '5') {
			board[1][1] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 6:
		if (board[1][2] == '6') {
			board[1][2] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
		}
	case 7:
		if (board[2][0] == '7') {
			board[2][0] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 8:
		if (board[2][1] == '8') {
			board[2][1] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 9:
		if (board[2][2] == '9') {
			board[2][2] = 'X';
			turn = false;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	default:
		std::cout << "\nPlease enter a number between 1-9\n";
		break;
	}

	showBoard();
}

void makeChoiceO() {
	int choice;


	std::cout << "\nPlease select the number to replace your O\n";
	std::cin >> choice;

	switch (choice) {
	case 1:
		if (board[0][0] == '1') {
			board[0][0] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
		}
	case 2:
		if (board[0][1] == '2') {
			board[0][1] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 3:
		if (board[0][2] == '3') {
			board[0][2] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 4:
		if (board[1][0] == '4') {
			board[1][0] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 5:
		if (board[1][1] == '5') {
			board[1][1] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 6:
		if (board[1][2] == '6') {
			board[1][2] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 7:
		if (board[2][0] == '7') {
			board[2][0] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 8:
		if (board[2][1] == '8') {
			board[2][1] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "You cannot choose this space.";
			break;
		}
	case 9:
		if (board[2][2] == '9') {
			board[2][2] = 'O';
			turn = true;
			checkWin();
			break;
		}
		else {
			std::cout << "\nYou cannot choose this space.";
			break;
		}
	default:
		std::cout << "\nPlease enter a number between 1-9\n";
		break;
	}

	showBoard();
}

int main()
{	
	
	do {
		showBoard();

		if (turn) {
			makeChoiceX();
		}
		else if (!turn) {
			makeChoiceO();
		}

	} while (gameOver == false);

		return 0;
}