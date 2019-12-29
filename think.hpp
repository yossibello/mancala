think(board b, __int8 my_side)
{
	if (b.end())
		reurn ???
		
	for (int i = my_side*7; i < 6+my_side*7; i++)
		think(b.move(i), 1-my_side);
		
}
	
