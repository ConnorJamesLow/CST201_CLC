    string getData() {
        string input;
        string item;
        //Takes string as a phone number without the dash or any ().
        cout << "\n Please enter a phone number" << endl;
        cin >> input;
        string key = input;
        int retreive = getHash(key);
        item = table[retreive];
        cout << item << endl;

        system("pause");

        return item;
    }


