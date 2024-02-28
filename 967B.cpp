// Copied but understood
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> a(n);

    for (int i = 0; i < n; ++i) 
    cin >> a[i];
    
    int maxi = 0;
    int xans = 0;
    int yans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int curans = 0;
            int l = 0;

            while (l < k && i - l >= 0 && a[i - l][j] == '.') 
            l++;

            int r = 0;

            while (r < k && i + r < n && a[i + r][j] == '.') 
            r++;
            
            curans += max(0, r + l - k);

            if (k != 1) 
            {
                l = 0;

            while (l < k && j - l >= 0 && a[i][j - l] == '.') 
            l++;
                
            r = 0;
            while (r < k && j + r < n && a[i][j + r] == '.') 
            r++;
                
            curans += max(0, r + l - k);
            }

            if (curans > maxi) 
            {
                maxi = curans;
                xans = i;
                yans = j;
            }
        }
    }

    cout << xans + 1 << " " << yans + 1 << endl;
    
    return 0;
}
