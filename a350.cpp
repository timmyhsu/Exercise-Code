#include <iostream>

using namespace std ;



int main()
{
	int acc[9] = {8 ,16,24,32,40,48,56,64,80} ;
	int mxlnth ;
	int arr[9];
	int ans = 1 ;
	while( cin >> mxlnth )
	{
		ans = 1 ;
		for (int x = 0 ; x < 9 ; x++)
			cin >> arr[x] ;
		int left = mxlnth ;
		for (int x = 0 ; x < 9 ;x++ )
		{
			if (!arr[x]) continue ;
			if (acc[x] > mxlnth ) 
			{	
				ans = -1 ;break ;
			}
			while(arr[x] != 0) 
			{
				if(left >= acc[x])
				{
					left -= acc[x] ; --arr[x] ;
				}
				else 
				{
					ans++ ;left = mxlnth ;
				}
			}
		}
		if(ans == -1) cout << "NO SOLUTION!!" << endl; 
		else cout << ans << endl ;
	}
}
