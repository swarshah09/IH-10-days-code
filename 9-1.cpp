bool isRotated(string str1, string str2)
    {
           // Your code here
        if(str1.size()<=2) return 0 ;
        if(str1==(str2.substr(str2.size()-2)+str2.substr(0, str2.size()-2))) return 1 ;
        else if(str1==(str2.substr(2)+str2.substr(0,2))) return 1 ;
        else return 0 ;
    }