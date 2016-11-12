#include <vector>
void Factorize(int A, vector <int> &oFactors)
{
	while (A % 2 == 0)
	{
		A /= 2;
		oFactors.push_back(2);
	}

	for (int i = 3; i < sqrt(A); i = i + 2)
	{
		while (A%i == 0)
		{
			A /= i;
			oFactors.push_back(i);
		}
	}

	if (A > 2)
		oFactors.push_back(A);
}
