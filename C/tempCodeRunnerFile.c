for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
            if(given[i * size_y + j]!=white[i * size_y + j]){
                white_count++;
            }
            if(given[i * size_y + j]!=black[i * size_y + j]){
                black_count++;
            }
		}
	}
    (white_count>black_count)?printf("%d", black_count):printf("%d", white_count);
