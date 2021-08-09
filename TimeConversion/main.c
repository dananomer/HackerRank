
 #define AM "AM"
 #define PM "PM"
 
char* timeConversion(char* s) {
    char hh[3] = "";
    memcpy(hh,s,2);
    char mm[3] = "";
    memcpy(mm,s+3,2);
    char ss[3] = "";
    memcpy(ss,s+6,2);
    char time[3] = "";
    memcpy(time, s+8, 2);
    
    int number = strtol(hh,NULL,10);
    
    if(number < 12 && !strcmp(PM,time)) number = (number + 12) % 24;
    else if(number == 12 && !strcmp(AM,time)) number = 0;
    if(number <=10) sprintf(hh, "0%d", number);
    else sprintf(hh, "%d", number);
    
    char* m = (char*)malloc(strlen(s) * sizeof(char));
    
    sprintf(m,"%s:%s:%s",hh,mm,ss);
    return m;
    
}
