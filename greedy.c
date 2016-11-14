#import<stdio.h>
#import<cs50.h>
#import<math.h>

int main (void)
{   
    //initialize counter
    float change;
    int counter = 0;
    
    //get the countable amount 
    do
    {
        change = GetFloat();
        
    }
    
    //make sure countable amount is more than 0
    while (change <= 0);
    
    //render cents into integer
    int cents = roundf((change * 100));
    
    //keep substracting until one quarter remains
    while (cents >= 25)
    {
        cents = cents - 25;
        counter++;
    }
    
    //keep substracting until 10 cents remain
    while (cents >= 10)
    {
        cents = cents - 10;
        counter++;
    }
    
    //keep substracting until 5 cents remain
    while (cents >= 5)
     {
         cents = cents -5;
         counter++;
     }
     
     //keep substracting until 1 cent remains
     while (cents >= 1)
     {
         cents = cents -1;
         counter++;
     }
         
    //print down the result
    printf("%d /n", counter);
    
        
}
