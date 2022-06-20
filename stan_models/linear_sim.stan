data { 
    int <lower = 0> N; 
    vector[N] y; //cases
    vector[N] x; //years
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
model { 
    alpha ~ normal(1600, 1500);
    beta ~ lognormal(0,1);
    sigma ~ exponential(1);
    y ~ normal(alpha + beta * x, sigma);
} 
generated quantities{ 
    real y_sim[N];
    for (n in 1:N){
        y_sim[n] = normal_rng(alpha + beta * x[n], sigma);
    }
    // One less point for accomodating autoregressive model
    real log_lik[N-1];
    for(j in 2:N){
        log_lik[j-1] = normal_lpdf(y[j]|mu[j],sigma);
    }
} 
