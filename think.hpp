int think(board b, int level, bool turn)
{
	if (b.end() || level == MAX_LEVEL )
		return b.score();
	
	int max_score = 0;
	
	for (int i = 0; i < 6; i++)
		max_score = max(max_score, think(b.move(i), leve++, !turn));
	return max_score;
}
int deep_play(board b, int level,int side)
{
	int max_pos;
	int max_score;
	int score;
	for (int i = 0; i < 6; i++)
	{
		score = think(b.move(i), 1);
		if (max_score< score)
		{
			max_score = score;
			max_pos = i;
		}
	}
			
	return i;

}
void play()
{
	board b;
	b.reset();

	while (!b.end())
	{
		//player
		int pot;
		std::cin >> pot;
		b = b.move(pot);
		
		//comp
		b = b.move(deep_play(b, 9);
	}
}


					
	
