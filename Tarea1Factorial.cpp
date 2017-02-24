int Tarea1::factorialIt()
{
	if (this->n < 2)
		return 1;
	int a=1;
	for (int i = 2; i <= this->n ; ++i)
		a*=i;
	return a;
}
int Tarea1::factorialRec(int n)
{
	if(n<2)
		return 1;
	return factorialRec(n-1)*n;
}