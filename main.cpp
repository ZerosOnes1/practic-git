double my_pow(double base, int exponent) {
    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }
    double result = 1.0;
    for (unsigned int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
