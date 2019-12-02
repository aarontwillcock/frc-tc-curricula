task main()
{
    int a = 1;

    while(a < 5){
        displayTextLine(a,"Hello")
        a = a + 1;
        sleep(1000); //Delays the program by 1000 ms (1 second)
    }
}