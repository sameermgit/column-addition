#include<stdio.h>     //header file for using scanf and printf
int main()     //main function
{
    int m[5][5],i,j,r,c,sum,n;      //declaration of variables
    printf("Enter row : ");//print no of rows
    scanf("%d",&r);           //input of rows
    printf("Enter coloum : ");//print no of columns
    scanf("%d",&c);//input of column
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element of [%d][%d] : ",i,j);  //pritn the matrix Elements
            scanf("%d",&m[i][j]);    //input of matrix element
         
        }
    }
    printf("The Matrix is:\n");     //showing the matrix
    for(i=0;i<r;i++)
    {
     
        for(j=0;j<c;j++)
       {
           printf("%d\t",m[i][j]);       
    }
    printf("\n");
    }
    

    
    printf("\ncolumn to be added:");      //select the column to be added
    scanf("%d",&n);        //input of which column to be added
     


    for(i=0;i<r;i++)
    {
     
        for(j=0;j<c;j++)
        {
            if(i<r&&j==n)
            sum=sum + m[i][j];    //adding the column Elements
        }
    }
    printf("The Sum of %d Column Elements in a Matrix =  %d \n",n,sum );  //output of addition of given column
    return 0;
}
   
   


