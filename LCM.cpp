int findLCM(vector<int> sortedFactorsOfA, vector<int> sortedFactorsOfB)
{
	int LCM = 1;
	vector<int> unionFactors;
	for (int i = 0, j = 0; i <= sortedFactorsOfA.size() && j <= sortedFactorsOfB.size();)
	{	
		if (i == sortedFactorsOfA.size())
		{
			for (; j < sortedFactorsOfB.size();)
			{
				unionFactors.push_back(sortedFactorsOfB[j]);
				j++;
			}
			break;
		}
		if (j == sortedFactorsOfB.size())
		{
			for (; i < sortedFactorsOfA.size();)
			{
				unionFactors.push_back(sortedFactorsOfA[i]);
				i++;
			}
			break;
		}
		if (sortedFactorsOfA[i] == sortedFactorsOfB[j])
		{
			unionFactors.push_back(sortedFactorsOfA[i]);
			i++; j++;
			continue;
		}
		if (sortedFactorsOfA[i] < sortedFactorsOfB[j])
		{
			unionFactors.push_back(sortedFactorsOfA[i]);
			i++;
			continue;
		}
		if (sortedFactorsOfA[i] > sortedFactorsOfB[j])
		{
			unionFactors.push_back(sortedFactorsOfB[j]);
			j++;
			continue;
		}		
	}

	for (int i = 0; i < unionFactors.size(); i++)
	{
		LCM *= unionFactors[i];
	}
	return LCM;
}
