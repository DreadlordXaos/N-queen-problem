# include <stdio.h>
# include <stdbool.h>

#define n 5
int board[n][n];

void print_board(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1){
                printf("Q ");
            }
            else{
                printf(". ");
            }
        }
        printf("\n");
    }
}


bool check_safe(int row,int col){
    //Column check
    for(int i=0;i<=row;i++){
        if(board[i][col]){
            return false;
        }
    }

    //upper left diagnoal
    for(int i=row-1,j=col-1;i>=0 & j>=0;i--,j--){
        if(board[i][j]){
            return false;
        }
    }

    //upper right diagnoal

    for(int i=row-1,j=col+1;i>=0 & j<n;i--,j++){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}

void queen_main(int row){
    if(row==n){
        print_board();
        printf("\n");
        return;
    }

    for(int col=0;col<n;col++){
        if(check_safe(row,col)){
            board[row][col]=1;
            queen_main(row+1);
            board[row][col]=0;
        }
    }
}

int main(){
    queen_main(0);
    return 0;
}