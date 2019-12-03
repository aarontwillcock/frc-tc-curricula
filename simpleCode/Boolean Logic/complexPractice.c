task main()
{
    bool a = true;
    bool b = false;
    bool c = false;

    if(a && b && c){
        //Stuff 1
    }
    
    if(a || b || c){
        //Stuff 2
    }
    
    if( (a || b) && c){
        //Stuff 3
    }
    
    if(a && (b || c) ){
        //Stuff 4
    }
    
    if( (a && b) || c){
        //Stuff 5
    }
    
    if( a || (b && c) ){
        //Stuff 6
    }
}