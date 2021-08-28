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
                for(auto x =0 ;x<9;x++) 
                { 
                        if( mxlnth < acc[x]) 
                        { 
                                ans = -1 ;break ; 
                        } 
                } 
                for (int x = 8 ; x >= 0 && ans != -1 ; --x ) 
                { 
                        //while(arr[x] != 0)  
                        { 
                                for (int y = x; y >=0 && arr[y]!=0 ;--y) 
                                {        
                                        while(left >= acc[y]) 
                                        { 
                                                left -= acc[y] ; --arr[y] ; 
                                        } 
                                        if(left < acc[1]) 
                                        { 
                                                ans++ ;left = mxlnth ;break ; 
                                        } 
 
                                } 
                        } 
                } 
                if(ans == -1) cout << "NO SOLUTION!!" << endl;  
                else cout << ans << endl ; 
        } 
}
