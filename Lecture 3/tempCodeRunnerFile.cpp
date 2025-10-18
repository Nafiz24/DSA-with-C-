    int n ; 
    cout<< "Enter the Number: " ; 
    cin>> n ; 
    bool isPrime = true ; 

    for(int i = 2 ; i<n ; i++){
        if(n%i == 0){
            isPrime = false ; 
            break;
        } 
    }

    if(isPrime == false || 1){
        cout<<"Non-Prime Number" ; 
    }else{
        cout<<"Prime Number" ; 
    }
    return 0 ; 
}