
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        // i th
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<" ";
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<" ";
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<" ";
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
