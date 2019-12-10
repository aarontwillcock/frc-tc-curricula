task main()
{
    int state = 0;
    while(true){
        switch(state){
            case 0:
                displayTextLine(1,"Top");
                state = 1;
                break;
            case 1:
                displayTextLine(2,"Bottom");
                state = 2;
                break;
        }
        sleep(2000);
    }
}