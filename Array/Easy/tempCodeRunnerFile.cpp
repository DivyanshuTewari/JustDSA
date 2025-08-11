set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(arr2[i]);
    }
    vector<int> un;
    for(auto it : s)
    {
        un.push_back(it);
    }
    for(int i=0;i<un.size();i++)
    {
        cout<<un[i]<<"      ";
    }