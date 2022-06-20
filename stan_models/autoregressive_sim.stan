data { 
    int N;
    vector [N] y; // cases
}
parameters { 
  real alpha; 
  real beta;
  real <lower = 0> sigma; 
} 
model{ 
  alpha ~ normal(1600, 1500);
  beta ~ lognormal(0,1);
  sigma ~ exponential(1);
  for (n in 2:N){
    y[n] ~ normal(alpha + beta * y[n-1], sigma);
  }
}
generated quantities{ 
    real y_sim[N];
    for (n in 2:N){
        y_sim[n] = normal_rng(alpha + beta * y[n-1], sigma);
    }
} 