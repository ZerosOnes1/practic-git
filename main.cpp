double my_fast_pow(double base, unsigned int exponent) {
    if (exponent == 0) return 1;
    double half = my_fast_pow(base, exponent / 2);
    return (exponent % 2 == 0) ? half * half : half * half * base;
}
