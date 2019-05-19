int fibo(int n)  
{
	int i, t1 = 0, t2 = 1, nextTerm, result;

    	for (i = 1; i <= n; ++i)
    	{
		result = t1;
        	nextTerm = t1 + t2;
        	t1 = t2;
        	t2 = nextTerm;
	}
	return result;
}
