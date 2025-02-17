#include <stdio.h>
int main() {
 int rows, cols;
 printf("Enter the number of rows and columns: ");
 scanf("%d %d", &rows, &cols);
 int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
 printf("Enter elements of first matrix:\n");
 for(int i = 0; i < rows; i++) {
 for(int j = 0; j < cols; j++) {
 //printf("Enter element [%d][%d]: ", i+1, j+1);
 scanf("%d", &matrix1[i][j]);
 }
 }
 printf("Enter elements of second matrix:\n");
 for(int i = 0; i < rows; i++) {
 for(int j = 0; j < cols; j++) {
// printf("Enter element [%d][%d]: ", i+1, j+1);
 scanf("%d", &matrix2[i][j]);
 }
 }
 // Performing matrix addition
 for(int i = 0; i < rows; i++) {
 for(int j = 0; j < cols; j++) {
 result[i][j] = matrix1[i][j] + matrix2[i][j];
 }
 }
 printf("Resultant Matrix after Addition:\n");
 for(int i = 0; i < rows; i++) {
 for(int j = 0; j < cols; j++) {
 printf("%d ", result[i][j]);
 }
 printf("\n");
 }
 return 0;
}
