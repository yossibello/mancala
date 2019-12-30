int think(board b, int level)
{
	if (b.end())
		return b.score();
	if (level == 0)
		return b.score();
	
	int max_score = 0;
	
	for (int i = level%2*7; i < 6+level%2*7; i++)
		max_score = max(max_score, think(b.move(i), level--));
	
	return max_score; 
}

	
