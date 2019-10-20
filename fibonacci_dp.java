//solving Fibonacci problem in different ways:

//using Recursion:
public static int fibonacci(int n) {
		if (n == 1 || n == 0) {
			return n;
		}

		int jl = fibonacci(n - 1);
		int jr = fibonacci(n - 2);

		int j = jr + jl;
		return j;
	}
//using Top-down approach
	public static int fibonacciTD(int n, int[] strg) {
		if (n == 1) {
			return 1;
		}
		if (n == 0) {
			return 0;
		}

		if (strg[n] != 0) {
			return strg[n];
		}
		int jl = fibonacciTD(n - 1, strg);
		int jr = fibonacciTD(n - 2, strg);

		int j = jr + jl;
		strg[n] = j;
		return j;
	}
//using Bottom-Up approach.
	public static int fibonacciBU(int n) {
		int[] strg = new int[n + 1];
		strg[0] = 0;
		strg[1] = 1;

		for (int i = 2; i < strg.length; i++) {
			strg[i] = strg[i - 1] + strg[i - 2];
		}
		return strg[n];

	}
//Efficient storage in Bottom-Up approach.
	public static int fibonacciBUef(int n) {
		if (n == 0 || n == 1) {
			return n;
		}
		int[] strg = new int[2];
		strg[0] = 0;
		strg[1] = 1;

		for (int i = 1; i <= n - 1; i++) {
			int sum = strg[0] + strg[1];
			strg[0] = strg[1];
			strg[1] = sum;
		}
		return strg[1];

	}
