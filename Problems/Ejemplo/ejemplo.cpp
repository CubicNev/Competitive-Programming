/**
 * Author: Carlos Nevárez - @CubicNev
 *
 * Suma de 1 hasta n
*/
# include <iostream>
# include <bits/stdc++.h>

# define endl "\n"

using namespace std;

typedef unsigned long long int numerote;

numerote solve() {
    numerote n;
    cin >> n;

    return (n*(n-1))/2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // No ocupa tanto espacio
    short int t;

    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}