# include <stdio.h>

int main(void)

{

       int att[5][5] = {{1, 0, 1, 1, 1}, {1, 1,1,1,1},{1,1,0,1,1},{1,1,1,1,1},{1,1,1,1,0}};

       int i, j;

       int count1 = 0;

     

       for ( i = 0; i < 5; i++)

   {

       for ( j = 0; j < 5; j++ )

   {

         if (att[i][j] = 1 )

   {

        ++count1;

         if ( count1 == 5)

    {

     printf( "%d student attend all days", i);

}


     return 0;
 }
}
}
}

