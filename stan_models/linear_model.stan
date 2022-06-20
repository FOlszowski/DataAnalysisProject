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
    alpha ~ normal(1600, 1500);
    beta ~ lognormal(0,1);
    sigma ~ exponential(1);
    y ~ normal(alpha + beta * x, sigma);
} 
generated quantities{ 
    real y_pred = normal_rng(alpha + beta * x_pred , sigma);
} 