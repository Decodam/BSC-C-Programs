#include <stdio.h>

int main(){
    int min, max, flag, i; // 0 = prime and 1 = non prime
    printf("Enter Range Min: "); scanf("%d", &min);
    printf("Enter Range Max: "); scanf("%d", &max);

    //Logic
    while (min < max-1)
    {
        flag = 0;
        if (min == 0 || min == 1)
        {
            flag == 1;
        }
        
        for(i = 2; i <= min/2; ++i){
            if(min%i == 0){
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            flag = 0;
            if (min+2 == 0 || min+2 == 1)
            {
                flag == 1;
            }
            
            for(i = 2; i <= (min+2)/2; ++i){
                if((min+2)%i == 0){
                    flag = 1;
                    break;
                }
            }

            if (flag == 0){
                printf("Coprime numbers are: (%d, %d) \n", min, min+2);
            }
        }
        

        min++;
    }
    

    return 1;
}