data { 
    int <lower = 0> N; 
    vector [N] y; //cases
    vector [N] x; //years
    int x_pred; //predicted year
    real prior_mu; // prior mean for alpha
    real prior_sigma;  // prior std for alpha
} 
 
parameters { 
    real alpha; 
    real beta; 
    real <lower = 0> sigma; 
} 
 
model { 
    alpha ~ normal(prior_mu, prior_sigma); 
    beta ~ normal(0, 3); //From research 
    sigma ~ exponential(0.01);
    y ~ normal(alpha + beta * x, sigma); 
} 

generated quantities{ 
  real y_pred = normal_rng(alpha + beta * x_pred, sigma);
} 