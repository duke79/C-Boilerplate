void Swap(int &A,int &B)
{
	int temp = A;
	A = B;
	B = temp;
}

void MergeSort(int *A, int N)
{
	if (N > 1)
	{
		MergeSort(A, N / 2);
		MergeSort(A + N / 2, (N - N / 2));
		for (int i = 0,j=((N/2));i<j && j<N;)
		{
			if (A[i] > A[j])
			{
				Swap(A[i], A[j]);
				j++;
			}
			else
				i++;
		}
	}
	else
	{
		// Do nothing
		;
	}
	
}
