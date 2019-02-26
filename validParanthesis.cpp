bool isValid(char* s) {
    //all the braces must be closed
    //before closing a brace, check if the inner most brace is closed or no
    //( - 1
    //) - 2
    //{ - 3
    //} - 4
    //[ - 5
    //] - 6
    if(s[0] == '\0')
        return true;
    int arr[100];
    int left = -1, i = 0;
    while(1)
    {
        if(s[i] == '(')
        {
            //push
            top++;
            arr[top] = 1;
        }
        else if(s[i] == '{')
        {
            //push
            top++;
            arr[top] = 3;
        }
        else if(s[i] == '[')
        {
            //push
            top++;
            arr[top] = 5;
        }
         if(s[i] == ')')
        {
            //pop
            if(top == -1)
                return false;
            if(arr[top] == 1)
                top--;
            else
                return false; 
        }
        else if(s[i] == '}')
        {
            //pop
            if(top == -1)
                return false;
            if(arr[top] == 3)
                top--;
            else
                return false;
        }
        else if(s[i] == ']')
        {
            //pop
            if(top == -1)
                return false;
            if(arr[top] == 5)
                top--;
            else
                return false;
        }
        i++;
        if(s[i] == '\0')
            break;
    }
    return true;
}
