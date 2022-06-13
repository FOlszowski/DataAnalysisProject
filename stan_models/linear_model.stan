data { 
    int <lower = 0> N; 
    vector [N] y; //cases
    vector [N] x; //years
    int x_pred; //predicted year
} 
parameters { 
    real alpha; 
    real beta; 
    real mu;
    real <lower = 0> sigma; 
} 
model { 
    alpha ~ normal(0,10); 
    beta ~ normal(0,10);  //From research 
    sigma ~ exponential(1);
    y ~ normal(alpha + beta * x, sigma);
} 
generated quantities{ 
    vector[N] log_lik;
    for(i in 1:N){
        log_lik[i] = normal_lpdf(y[i]|mu, sigma);
    }
    real y_pred = normal_rng(alpha + beta * x_pred , sigma);
} 