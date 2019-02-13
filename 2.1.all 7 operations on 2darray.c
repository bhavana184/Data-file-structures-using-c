#include<stdio.h>
void read_matrix(int mat[2][2],int,int);
void sum_matrix(int mat1[2][2],int mat2[2][2],int,int);
void diff_matrix(int mat1[2][2],int mat2[2][2],int,int);
void mul_matrix(int mat1[2][2],int mat2[2][2],int,int);
void transpose_matrix(int mat[2][2],int ,int);
void display_matrix(int mat[2][2],int r ,int c);//r=rows,c=column
int search(int mat[2][2], int r, int c,int x);//x is elemnt to be found
int main()
{
int op,row,col,ch,x;
int mat1[2][2],mat2[2][2];
do{
printf("\nPERFORM FOLLOWING OPERATIONS ON 2D ARRAY");
printf("\n1.Read two matrices");
printf("\n2.Add two matrices");
printf("\n3.Subtract two matrices");
printf("\n4.Multiply two matrices");
printf("\n5.Transpose of matrix");
printf("\n6.Display two matrices");
printf("\n7.Search for an elemnt in the matrix");
//printf("\n Exit");
printf("\nEnter your option :");
scanf("%d",&op);
switch(op)
{
case 1: printf("\nEnter the no. of rows and columns of the matrix : ");
        scanf("%d %d",&row,&col);
        printf("\nEnter first matrix :\n");
        read_matrix(mat1,row,col);
        printf("\nEnter second matrix :\n ");
        read_matrix(mat2,row,col);
        break;
case 2: printf("\nEnter the no. of rows and columns of the matrix : ");
        scanf("%d %d",&row,&col);
        printf("\nEnter first matrix :\n");
        read_matrix(mat1,row,col);
        printf("\nEnter second matrix :\n ");
        read_matrix(mat2,row,col);
		printf("\n first matrix :\n");
        display_matrix(mat1,row,col);
        printf("\n second matrix :\n ");
        display_matrix(mat2,row,col);
		printf("\nSum of two matrices :\n");
        sum_matrix(mat1,mat2,row,col);
        break;
case 3:	printf("\nEnter the no. of rows and columns of the matrix : ");
        scanf("%d %d",&row,&col);
        printf("\nEnter first matrix :\n");
        read_matrix(mat1,row,col);
        printf("\nEnter second matrix :\n ");
        read_matrix(mat2,row,col);
		printf("\n first matrix :\n");
        display_matrix(mat1,row,col);
        printf("\n second matrix :\n ");
        display_matrix(mat2,row,col);
	 	printf("\nDifference of two matrices :\n");
        diff_matrix(mat1,mat2,row,col);
        break;
case 4: printf("\nEnter the no. of rows and columns of the matrix : ");
        scanf("%d %d",&row,&col);
        printf("\nEnter first matrix :\n");
        read_matrix(mat1,row,col);
        printf("\nEnter second matrix :\n ");
        read_matrix(mat2,row,col);
		printf("\n first matrix :\n");
        display_matrix(mat1,row,col);
        printf("\n second matrix :\n ");
        display_matrix(mat2,row,col);
		printf("\nProduct of two matrices :\n");
        if(col==row)
        mul_matrix(mat1,mat2,row,col);
        else printf("\n To multiply 2 matrices,number of col in 1st matrix should be equal to no. of rows in 2nd matrix");
        break;
case 5: printf("\nEnter the no. of rows and columns of the matrix : ");
        scanf("%d %d",&row,&col);
        printf("\nEnter first matrix :\n");
        read_matrix(mat1,row,col);
        printf("\nEnter second matrix :\n ");
        read_matrix(mat2,row,col);
		printf("\n first matrix :\n");
        display_matrix(mat1,row,col);
        printf("\n second matrix :\n ");
        display_matrix(mat2,row,col);
		printf("\nTranspose of 1st matrix :\n");
        transpose_matrix(mat1,row,col);
        printf("\nTranspose of 2nd matrix :\n");
        transpose_matrix(mat2,row,col);
        break;
case 6:printf("\nEnter the no. of rows and columns of the matrix : ");
        scanf("%d %d",&row,&col);
        printf("\nEnter first matrix :\n");
        read_matrix(mat1,row,col);
        printf("\nEnter second matrix :\n ");
        read_matrix(mat2,row,col);
		printf("\n first matrix :\n");
        display_matrix(mat1,row,col);
        printf("\n second matrix :\n ");
        display_matrix(mat2,row,col);
        break;
case 7:	printf("\nEnter the no. of rows and columns of the matrix : ");
        scanf("%d %d",&row,&col);
        printf("\nEnter matrix :\n");
        read_matrix(mat1,row,col);
        printf("\n matrix :\n");
        display_matrix(mat1,row,col);
        search(mat1, row, col,x);
        break;
default:printf("\nPlease chose a valid option dear!!\n");
}
printf("\nDo you want to continue(enter 0 for no and 1 for yes):");
scanf("%d",&ch);
}while(ch!=0);
return 0;
}

void read_matrix(int mat[2][2],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    printf("mat[%d][%d]= ",i,j);
    scanf("%d",&mat[i][j]);
    printf(" ");
    }
}
}
void sum_matrix(int mat1[2][2],int mat2[2][2],int r,int c)
{
int i,j,sum[2][2];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    sum[i][j]=mat1[i][j]+mat2[i][j];
    }
}
display_matrix(sum,r,c);
}
void diff_matrix(int mat1[2][2],int mat2[2][2],int r,int c)
{
int i,j,diff[2][2];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    diff[i][j]=mat1[i][j]-mat2[i][j];
    }
}
display_matrix(diff,r,c);
}
void mul_matrix(int mat1[2][2],int mat2[2][2],int r,int c)
{
int i,j,mul[2][2],k;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    mul[i][j]=0;
    for(k=0;k<c;k++)/////
    mul[i][j]+=mat1[i][k]*mat2[k][j];
    }
}
display_matrix(mul,r,c);
}
void transpose_matrix(int mat[2][2],int r,int c)
{
int i,j,trans[2][2];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    trans[i][j]=mat[j][i];//just interchange row and col that is j and i
    }
}
display_matrix(trans,r,c);
}
void display_matrix(int mat[2][2],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{   printf("\n");
    for(j=0;j<c;j++)
    {
    printf("\t mat[%d][%d]=%d",i,j,mat[i][j]);
    }
}
}
int search(int mat[2][2], int r, int c,int x) 
{ 
int i = 0, j = r-1; //set indexes for top right element
printf("\nenter the element to be searched :") ;
scanf("%d",&x);
while ( i < r && j >= 0 ) 
{ 
	if ( mat[i][j] == x ) 
	{ 
		printf("%d Found at %d, %d",x, i, j); 
		return 1; 
	} 
	if ( mat[i][j] > x ) 
		j--; 
	else // if mat[i][j] < x 
		i++; 
} 

printf("%d not found",x); 
return 0; // if ( i==n || j== -1 ) 
} 


