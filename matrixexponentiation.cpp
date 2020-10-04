void mult(vector<vector<int>> &p,vector<vector<int>> &q,int m)
{vector<vector<int>> c(3,vector<int> (3,0));
  int a11,a12,a13,a21,a22,a23,a31,a32,a33;
 int i,j,k,sum;
for (i = 0; i <= 2; i++) {
      for (j = 0; j <= 2; j++) {
         sum = 0;
         for (k = 0; k <= 2; k++) {
            sum = (sum+(p[i][k] * q[k][j])%m)%m;
         }
         c[i][j] = sum;
      }
   }
p=c;
}


void power(vector<vector<int>> &p,int n,int a,int b,int c,int m)
{
  if(n==0||n==1)
    return;
  
     power(p,n/2,a,b,c,m);
    mult(p,p,m);
    if(n%2==1)
    {
       vector<vector<int>> q{{a,b,c},{1,0,0},{0,0,1}};
       mult(p,q,m);
    }

}