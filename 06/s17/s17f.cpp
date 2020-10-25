int Sum(int A[][8])
{
  int i, j, sum = 0;
  for (i = 0; i < 5; ++i)
  {
    for (j = 0; j < 8; ++j)
    {
      sum += A[i][j];
    }
  }
  return sum;
}