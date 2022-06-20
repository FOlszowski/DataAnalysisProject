data { 
  int <lower = 0> N; 
  vector [N] y; 
} 
 
parameters { 
  real alpha; 
  real beta;
  real mu;
  real <lower = 0> sigma; 
} 
model { 
  alpha ~ normal(1600, 1500);
  beta ~ lognormal(0,1);
  sigma ~ exponential(1);
  for (n in 2:N){
    y[n] ~ normal(alpha + beta * y[n-1], sigma);
  }
} 
generated quantities{ 
  real y_pred = normal_rng(alpha + beta * y[N], sigma); 
} 
