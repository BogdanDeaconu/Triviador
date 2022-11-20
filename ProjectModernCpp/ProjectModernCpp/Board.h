#pragma once
#include"Player.h"
#include<vector>
#include<optional>
#include<cstdint>
#include<array>
class Board
{
public:
	using Position = std::pair<uint8_t, uint8_t>;

public:
	//getter
	const std::optional<Player>& operator[](Position pos) const;
	//setter
	std::optional<Player>& operator[](Position  pos);
	
	friend std::ostream& operator<<(std::ostream& out, const Board& board);
	
	void ChooseNumberOfPlayers(int n);
	int GetNumberOfPlayers();
	void SetBoardDimensions();
private:
	static std::size_t m_height;
	static std::size_t m_width;
	static std::size_t m_size;
	static int NumberOfPlayers;	
private:
	std::vector<std::optional<Player>>m_board;
};

