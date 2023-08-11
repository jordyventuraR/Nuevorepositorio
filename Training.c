int basic_op(char op, value1, int value2)
{
    int suma, resta, producto, division;
    switch (op)
    {
    case '+':
        suma = value1 + value2;
        return suma;

    case '-':
        resta = value1 - value2;
        return resta;

    case '*':
        producto = value1 * value2;
        return producto;

    case '/':
        division = value1 / value2;
        return division;
    }
}