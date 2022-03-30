#include <stdio.h>


int array(int hi[3][2],int id, int pin)
{
    int deez = 0;

      for(int x = 0; x<3; x++)
    {
        if(id == hi[x][0] && pin == hi[x][1])
        {
          deez = 1;
        }
    }
    return deez;
}
    int main()
{
        int hi[3][2] = {{123,456},{789,777},{666,666}};

            int id,pin;
            printf("Welcome! Dear Customer\n");
                printf("Please Enter Your ID Number: ");
                    scanf("%d",&id);
            printf("\nMAKE SURE TO KEEP YOUR PIN SAFE\n");
                printf("Please Enter Your PIN: ");
                    scanf("%d",&pin);

        if(array(hi,id,pin))
    {
            printf("\nHello! You Have Successfully Logged In\nID#:%d",id);
    }
            else
            {
               printf("Invalid ID/PIN!");
            }


    return 0;
}