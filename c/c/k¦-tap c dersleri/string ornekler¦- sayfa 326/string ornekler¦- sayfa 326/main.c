//
//  main.c
//  string orneklerı sayfa 326
//
//  Created by Sadık Sünbül on 9.11.2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
//    char iller[4][10]={"ankara","ıstanbul","ızmir"};
   
//    puts(iller[2]);
    
    int i;
    char iller[3][10]={"ankara","ıstanbul","ızmır"};
    for (i=0; i<3; i++)
    {
        puts(iller[i]);
    }
    
    char filimler[][40]={"deli","salak","mal","deli","got","setr","aqwed"};
    puts("-------------\n film listesi \n----------");
    for (i=0; i<7; i++)
    {
        puts(filimler[i]);
    }
    
    return 0;
}
