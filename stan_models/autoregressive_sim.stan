data { 
    int N;
    vector [N] y; // cases
}
parameters { 
  real alpha; 
  real beta;
  real <lower = 0> sigma; 
} 
transformed parameters {
  real mu[N];
  for (n in 2:N){
    mu[n] = alpha + beta * y[n-1];
  }
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
    real log_lik[N-1];
    for(j in 2:N){
        log_lik[j-1] = normal_lpdf(y[j]|mu[j],sigma);
    }
} 