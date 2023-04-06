#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:: number to square
 * Return: integer value
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	int _start = 1;
	int end = n;
	int ans;
	while (_start <= end) 
	{
		int mid = (_start + end)/ 2;

		if (mid * mid == n)
			return mid;
		if (mid * mid <n)
		{
			_start = mid + 1;
			ans = mid;
		}
		else
			end = mid - 1;
	}
	return ans;
}
