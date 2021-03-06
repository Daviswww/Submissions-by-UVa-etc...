#include <iostream>
using namespace std;

int main()
{
	int Q;
	cin >> Q;
	for(int q = 0; q < Q; ++q)
	{
		long long N, A, B, ans = 0;
		cin >> N >> A >> B;
		
		// 奇數的話先買一個1的變成偶數 
		if(N % 2 != 0)
		{
			ans += A;
		}
		
		// 剩下的全部兩個兩個買，看是兩個1的便宜還是一個2的便宜 
		A *= 2;
		if(A < B)
		{
			ans += N / 2 * A;
		}
		else
		{
			ans += N / 2 * B;
		}
		
		cout << ans << endl;
	}

    return 0;
}

