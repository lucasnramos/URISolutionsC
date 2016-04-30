#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    int i, j, N, leds;
    char str[100];

    scanf("%d",&N);

    while(N--)
    {
        scanf("%s",str);

        j = strlen(str);

        for(i=0, leds=0; i < j; i++)
        {
        	if(str[i] == '0' || str[i] == '6' || str[i] == '9')
            leds += 6;
          else if(str[i] == '1')
            leds += 2;
          else if(str[i] == '2' || str[i] == '3' || str[i] == '5')
            leds += 5;
        	else if(str[i] == '4')
            leds += 4;
          else if(str[i] == '7')
            leds += 3;
          else if(str[i] == '8')
            leds += 7;
        }
        printf("%d leds\n", leds);
    }
}
