
  #include<stdio.h>
  #include<math.h>
  int input_array_size(){
      int n;
      printf("enter the size");
      scanf("%d",&n);
      return n;
  }
  void init_array(int n, int a[n]){
      int i=0;
      for(i=2;i<n;i++){
      a[i]= i;
      }
  }
  void erotosthenes_sieve(int n, int a[n]){
int i,j;
for(i=2;i<=n;i++){
  for(j =2;j<=n;j++){
    if(a[j]%i==0 && a[j]!=i){
      a[j] = 0;
    }
  }
}
  }
  void output(int n, int a[n]){
      int i;
    
      for(i=2;i<n;i++){
        if(a[i]!=0){
          printf("%d\n",a[i]);}}
  }
  int main(){
      int n = input_array_size();
      int a[n];
      init_array(n,a);
      erotosthenes_sieve(n,a);
      output(n,a);
      return 0;
  }