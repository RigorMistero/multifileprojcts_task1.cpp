// ���� ��������� ������������� �������: ��������, ���������, ���������, �������, ���������� � �������.
//��� ����� ���������� �� � ��������� ����� ��������� ���� � ��������������� ��� �� ������� main.
//��������� ������������ ������ ��� ����� � ������� ��������. �������� ��������� ��� �� �������.

double sum (double num1, double num2)
{
    return num1 + num2;
}

double substract (double num1, double num2)
{
    return num1 - num2;
}

double multiply (double num1, double num2)
{
    return num1*num2;
}

double division (double num1, double num2)
{
    return num1/num2;
}

double exponentiation (double num1, double num2)
{
  int res{1};
  res = num1;

  for (int i{}; i < num2 - 1; i++)
        {
            res *= num1;
        }

    //std::cout << num1 << "exponentiated to " << num2 << " = " << res;
    return res;

}
