void rotateMatrix(vector<vector<int>> &mat, int n, int m) {
  int l = 0, r = m - 1, t = 0, d = n - 1;

     while(l<r && t<d){
        if(l<r){
            int temp=mat[t][r];
            int i=r;
            while(i>l){
                mat[t][i]=mat[t][i-1];
                i--;
            }
            mat[t][l]=temp;
        }

        if(t<d){
            int temp=mat[t][l];
            int i=t;
            while(i<d){
                mat[i][l]=mat[i+1][l];
                i++;
            }
            mat[d][l]=temp;
        }


        if(l<r){
            int temp=mat[d][l];
            int i=l;
            while(i<r){
                mat[d][i]=mat[d][i+1];
                i++;
            }
            mat[d][r]=temp;
        }

        if(l<r){
            int temp=mat[d][r];
            int i=d;
            while(i>t+1){
                mat[i][r]=mat[i-1][r];
                i--;
            }
            mat[t+1][r]=temp;
        }

        l++;
        r--;
        t++;
        d--;


    }
}
