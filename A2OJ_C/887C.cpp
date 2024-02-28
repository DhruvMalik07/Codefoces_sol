/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n=25;
    int a[n];
    for(int i=1;i<=n;i++) cin>>a[i];
    
    if((a[1]==a[3]&&a[3]==a[6]&&a[6]==a[8]    && a[5]==a[7]&&a[7]==a[10]&&a[10]==a[12]    && a[9]==a[11]&&a[11]==a[21]&&a[21]==a[23] 
       a[22]==a[24]&&a[24]==a[2]&&a[2]==a[4] && a[13]==a[14]&&a[14]==a[15]&&a[15]==a[16] && a[17]==a[18]&&a[18]==a[19]&&a[19]==a[20]) ||       
       (a[1]==a[3]&&a[3]==a[21]&&a[21]==a[23]   && a[5]==a[7]&&a[7]==a[2]&&a[2]==a[4]       && a[9]==a[11]&&a[11]==a[6]&&a[6]==a[8] 
       a[22]==a[24]&&a[24]==a[10]&&a[10]==a[12] && a[13]==a[14]&&a[14]==a[15]&&a[15]==a[16] && a[17]==a[18]&&a[18]==a[19]&&a[19]==a[20]) ||
       (a[13]==a[14]&&a[14]==a[7]&&a[7]==a[8]   && a[5]==a[6]&&a[6]==a[19]&&a[19]==a[20] && a[17]==a[18]&&a[18]==a[23]&&a[23]==a[24] 
       a[21]==a[22]&&a[22]==a[15]&&a[15]==a[16] && a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]    && a[9]==a[10]&&a[10]==a[11]&&a[11]==a[12]) ||
       (a[13]==a[14]&&a[14]==a[23]&&a[23]==a[24] && a[5]==a[6]&&a[6]==a[15]&&a[15]==a[16] && a[17]==a[18]&&a[18]==a[7]&&a[7]==a[8] 
       a[21]==a[22]&&a[22]==a[19]&&a[19]==a[20]  && a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]    && a[9]==a[10]&&a[10]==a[11]&&a[11]==a[12]) ||
       (a[3]==a[4]&&a[4]==a[13]&&a[13]==a[15]   && a[14]==a[16]&&a[16]==a[11]&&a[11]==a[12] && a[9]==a[10]&&a[10]==a[18]&&a[18]==a[20] 
       a[19]==a[17]&&a[17]==a[1]&&a[1]==a[2]    && a[5]==a[6]&&a[6]==a[7]&&a[7]==a[8]       && a[21]==a[22]&&a[22]==a[23]&&a[23]==a[24]) ||
       (a[3]==a[4]&&a[4]==a[18]&&a[18]==a[20]   && a[14]==a[16]&&a[16]==a[1]&&a[1]==a[2] && a[9]==a[10]&&a[10]==a[13]&&a[13]==a[15] 
       a[19]==a[17]&&a[17]==a[11]&&a[11]==a[12] && a[5]==a[6]&&a[6]==a[7]&&a[7]==a[8]    && a[21]==a[22]&&a[22]==a[23]&&a[23]==a[24])) cy;

       else cn;
       return;
}

int main()
{
    solve();   
    return 0;
}
*/

// Majdoori
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

void solve() {
    int n = 25;
    int a[n];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    if ((a[1] == a[3] && a[3] == a[6] && a[6] == a[8] && a[5] == a[7] && a[7] == a[10] && a[10] == a[12] && a[9] == a[11] && a[11] == a[21] &&
         a[21] == a[23] && a[22] == a[24] && a[24] == a[2] && a[2] == a[4] && a[13] == a[14] && a[14] == a[15] && a[15] == a[16] &&
         a[17] == a[18] && a[18] == a[19] && a[19] == a[20])
    || (a[1] == a[3] && a[3] == a[21] && a[21] == a[23] && a[5] == a[7] && a[7] == a[2] && a[2] == a[4] && a[9] == a[11] &&
        a[11] == a[6] && a[6] == a[8] && a[22] == a[24] && a[24] == a[10] && a[10] == a[12] && a[13] == a[14] && a[14] == a[15] &&
        a[15] == a[16] && a[17] == a[18] && a[18] == a[19] && a[19] == a[20])
    || (a[13] == a[14] && a[14] == a[7] && a[7] == a[8] && a[5] == a[6] && a[6] == a[19] && a[19] == a[20] && a[17] == a[18] &&
        a[18] == a[23] && a[23] == a[24] && a[21] == a[22] && a[22] == a[15] && a[15] == a[16] && a[1] == a[2] && a[2] == a[3] &&
        a[3] == a[4] && a[9] == a[10] && a[10] == a[11] && a[11] == a[12])
    || (a[13] == a[14] && a[14] == a[23] && a[23] == a[24] && a[5] == a[6] && a[6] == a[15] && a[15] == a[16] && a[17] == a[18] &&
        a[18] == a[7] && a[7] == a[8] && a[21] == a[22] && a[22] == a[19] && a[19] == a[20] && a[1] == a[2] && a[2] == a[3] &&
        a[3] == a[4] && a[9] == a[10] && a[10] == a[11] && a[11] == a[12])
    || (a[3] == a[4] && a[4] == a[13] && a[13] == a[15] && a[14] == a[16] && a[16] == a[11] && a[11] == a[12] && a[9] == a[10] &&
        a[10] == a[18] && a[18] == a[20] && a[19] == a[17] && a[17] == a[1] && a[1] == a[2] && a[5] == a[6] && a[6] == a[7] && 
        a[7] == a[8] && a[21] == a[22] && a[22] == a[23] && a[23] == a[24])
    || (a[3] == a[4] && a[4] == a[18] && a[18] == a[20] && a[14] == a[16] && a[16] == a[1] && a[1] == a[2] && a[9] == a[10] &&
        a[10] == a[13] && a[13] == a[15] && a[19] == a[17] && a[17] == a[11] && a[11] == a[12] && a[5] == a[6] && a[6] == a[7] &&
        a[7] == a[8] && a[21] == a[22] && a[22] == a[23] && a[23] == a[24]))
        cy;
    else
        cn;
}

int main() {
    solve();
    return 0;
}