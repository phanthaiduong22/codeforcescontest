        T--;
        int n, heal;
        cin >> n >> heal;
        int max_damage = 0, max_d = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            max_damage = max(max_damage, x);
            max_d = max(x-y, max_d);
        }
        int temp = (heal - max_damage)/max_d + 1;