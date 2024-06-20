 int num;
    cin >> num;

    vector<string> vec_str;

    string input;
    for (int i = 0; i < num; ++i)
    {
        getline(cin, input);
        vec_str.push_back(input);
    }

    vector<string> results;

    for (const auto &str1 : vec_str)
    {
        for (const auto &str2 : vec_str)
        {
            string comb_str = str1 + str2;
            results.push_back(comb_str);
        }
    }

    string res = " ";
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (results[i] == vec_str[i])
            {
                res += "1";
            }
            else
            {
                res += "0";
            }
        }
    }

    cout << res << "\n";