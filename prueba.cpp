 /*   
    vector<long long> v;
    v.push_back(1); // 0!
    v.push_back(1); // 1!
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        int aux = v.size();
        if (v.size() < a + 1)
        {
            int c = 0;
            for (int i = v.size(); i < a + 1; i++)
            {
                c = v[i - 1] * i;
                v.push_back(c);
            }
        }

        int score = 0;
        long long n = v[a] / v[b];
        // cout << n << "\n";
        int c = 0;
        int primo = primos[0];
        while (n > 1)
        {
            if (n % primo == 0)
            {
                n = n / primo;
                score++;
            }
            else
            {
                c++;
                if (c >= primos.size())
                {
                    sig(primos.back());
                }
                primo = primos[c];
            }
        }

        cout << score << "\n";
    } */