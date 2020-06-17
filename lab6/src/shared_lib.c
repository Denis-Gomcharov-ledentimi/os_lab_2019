typedef unsigned long long ull;


ull MultModulo(ull a, ull b, ull mod) {
    ull result = 0;
    if (a % mod)
    	a = a % mod;
	
    while (b > 0) {
        if (b % 2 == 1 )
	    if ((result + a) % mod)
            	result = (result + a) % mod;
        if ( (a * 2) % mod)
        a = (a * 2) % mod;
        b /= 2;
    }

    return result % mod;
}