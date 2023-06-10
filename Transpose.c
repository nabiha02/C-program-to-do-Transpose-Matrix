#include <stdio.h>

int main(void){

  int A[100][100],Transpose[100][100],i,j,no_row,no_col;

  printf("Input your no_row: ");
  scanf("%d", &no_row);
  printf("Input your no_col: ");
  scanf("%d", &no_col);

  //scanning A martrix
  printf("Enter elements for A matrix\n");
  for(i=0;i<no_row;i++){

    for(j=0;j<no_col;j++){

      printf("A[%d][%d] = ", i,j);
      scanf("%d", &A[i][j] );
    }   
  }

  //printing A martrix
  printf("\nA = ");
  for(i=0;i<no_row;i++){

    printf("\t");
    for(j=0;j<no_col;j++){

        printf("%d ", A[i][j]);
    }

    printf("\n");

  }

  //Transpose matrix
  for(i=0;i<no_row;i++){
     
     for(j=0;j<no_col;j++){

      Transpose[j][i] = A[i][j];

     }

  }


  //printing Transpose martrix
  printf("Transpose Matrix: \n");
  for(i=0;i<no_col;i++){
      
      printf("\t");

    for(j=0;j<no_row;j++){

        printf("%d ", Transpose[i][j]);
    }

    printf("\n");

  }


  }