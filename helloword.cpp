    #include <bits/stdc++.h>
    using namespace std;

    int hi( int n, int a, int b, int c)
    {
        if (pow(a , 3) + pow(b , 3) + pow(c , 3) == n)
        return  1;
        else return 0;
    }
        
        int main() {
            int n; cin >> n;
            for (int i = 100; i < n; i++)
            {
                int a = i / 100;
                int b = (i / 10) % 10;
                int c = i % 100 % 10;
                if ( hi(i, a, b, c)) cout << i <<endl;
            }
            return 0;
}