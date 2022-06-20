
// Code generated by stanc v2.29.1
#include <stan/model/model_header.hpp>
namespace autoregressive_sim_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 28> locations_array__ = 
{" (found before start of program)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 6, column 2 to column 13)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 7, column 2 to column 12)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 8, column 2 to column 25)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 11, column 2 to column 13)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 13, column 4 to column 34)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 12, column 16 to line 14, column 3)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 12, column 2 to line 14, column 3)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 25, column 4 to column 18)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 27, column 8 to column 60)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 26, column 18 to line 28, column 5)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 26, column 4 to line 28, column 5)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 29, column 4 to column 22)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 31, column 8 to column 53)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 30, column 17 to line 32, column 5)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 30, column 4 to line 32, column 5)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 17, column 2 to column 29)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 18, column 2 to column 24)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 19, column 2 to column 25)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 21, column 4 to column 48)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 20, column 16 to line 22, column 3)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 20, column 2 to line 22, column 3)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 2, column 4 to column 10)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 3, column 12 to column 13)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 3, column 4 to column 17)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 11, column 10 to column 11)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 25, column 15 to column 16)",
 " (in 'C:/Users/solar/Desktop/DataAnalysisProject/stan_models/autoregressive_sim.stan', line 29, column 17 to column 20)"};




class autoregressive_sim_model final : public model_base_crtp<autoregressive_sim_model> {

 private:
  int N;
  Eigen::Matrix<double, -1, 1> y__;
  int log_lik_1dim__; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> y{nullptr, 0};
 
 public:
  ~autoregressive_sim_model() { }
  
  inline std::string model_name() const final { return "autoregressive_sim_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.1", "stancflags = "};
  }
  
  
  autoregressive_sim_model(stan::io::var_context& context__,
                           unsigned int random_seed__ = 0,
                           std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "autoregressive_sim_model_namespace::autoregressive_sim_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 22;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 22;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 23;
      stan::math::validate_non_negative_index("y", "N", N);
      current_statement__ = 24;
      context__.validate_dims("data initialization","y","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      y__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&y) Eigen::Map<Eigen::Matrix<double, -1, 1>>(y__.data(), N);
      
      {
        std::vector<local_scalar_t__> y_flat__;
        current_statement__ = 24;
        y_flat__ = context__.vals_r("y");
        current_statement__ = 24;
        pos__ = 1;
        current_statement__ = 24;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 24;
          stan::model::assign(y, y_flat__[(pos__ - 1)],
            "assigning variable y", stan::model::index_uni(sym1__));
          current_statement__ = 24;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 25;
      stan::math::validate_non_negative_index("mu", "N", N);
      current_statement__ = 26;
      stan::math::validate_non_negative_index("y_sim", "N", N);
      current_statement__ = 27;
      log_lik_1dim__ = std::numeric_limits<int>::min();
      
      
      current_statement__ = 27;
      log_lik_1dim__ = (N - 1);
      current_statement__ = 27;
      stan::math::validate_non_negative_index("log_lik", "N - 1",
                                              log_lik_1dim__);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "autoregressive_sim_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      local_scalar_t__ beta = DUMMY_VAR__;
      current_statement__ = 2;
      beta = in__.template read<local_scalar_t__>();
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      std::vector<local_scalar_t__> mu =
         std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      current_statement__ = 7;
      for (int n = 2; n <= N; ++n) {
        current_statement__ = 5;
        stan::model::assign(mu,
          (alpha +
            (beta *
              stan::model::rvalue(y, "y", stan::model::index_uni((n - 1))))),
          "assigning variable mu", stan::model::index_uni(n));
      }
      {
        current_statement__ = 16;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(alpha, 1600, 1500));
        current_statement__ = 17;
        lp_accum__.add(stan::math::lognormal_lpdf<propto__>(beta, 0, 1));
        current_statement__ = 18;
        lp_accum__.add(stan::math::exponential_lpdf<propto__>(sigma, 1));
        current_statement__ = 21;
        for (int n = 2; n <= N; ++n) {
          current_statement__ = 19;
          lp_accum__.add(
            stan::math::normal_lpdf<propto__>(
              stan::model::rvalue(y, "y", stan::model::index_uni(n)),
              (alpha +
                (beta *
                  stan::model::rvalue(y, "y",
                    stan::model::index_uni((n - 1))))), sigma));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "autoregressive_sim_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      double beta = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      beta = in__.template read<local_scalar_t__>();
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      std::vector<double> mu =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      out__.write(alpha);
      out__.write(beta);
      out__.write(sigma);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 7;
      for (int n = 2; n <= N; ++n) {
        current_statement__ = 5;
        stan::model::assign(mu,
          (alpha +
            (beta *
              stan::model::rvalue(y, "y", stan::model::index_uni((n - 1))))),
          "assigning variable mu", stan::model::index_uni(n));
      }
      if (emit_transformed_parameters__) {
        out__.write(mu);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<double> y_sim =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 11;
      for (int n = 2; n <= N; ++n) {
        current_statement__ = 9;
        stan::model::assign(y_sim,
          stan::math::normal_rng(
            (alpha +
              (beta *
                stan::model::rvalue(y, "y", stan::model::index_uni((n - 1))))),
            sigma, base_rng__),
          "assigning variable y_sim", stan::model::index_uni(n));
      }
      std::vector<double> log_lik =
         std::vector<double>(log_lik_1dim__, 
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 15;
      for (int j = 2; j <= N; ++j) {
        current_statement__ = 13;
        stan::model::assign(log_lik,
          stan::math::normal_lpdf<false>(
            stan::model::rvalue(y, "y", stan::model::index_uni(j)),
            stan::model::rvalue(mu, "mu", stan::model::index_uni(j)), sigma),
          "assigning variable log_lik", stan::model::index_uni((j - 1)));
      }
      out__.write(y_sim);
      out__.write(log_lik);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ alpha = DUMMY_VAR__;
      alpha = in__.read<local_scalar_t__>();
      out__.write(alpha);
      local_scalar_t__ beta = DUMMY_VAR__;
      beta = in__.read<local_scalar_t__>();
      out__.write(beta);
      local_scalar_t__ sigma = DUMMY_VAR__;
      sigma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"alpha", "beta", "sigma", "mu",
      "y_sim", "log_lik"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}, std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(log_lik_1dim__)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "beta");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_sim" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= log_lik_1dim__; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "beta");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_sim" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= log_lik_1dim__; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"y_sim\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(log_lik_1dim__) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"y_sim\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(log_lik_1dim__) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + 1) + 1);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + log_lik_1dim__);
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + 1) + 1);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + log_lik_1dim__);
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 3> names__{"alpha", "beta", "sigma"};
      const std::array<Eigen::Index, 3> constrain_param_sizes__{1, 1, 1};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}

using stan_model = autoregressive_sim_model_namespace::autoregressive_sim_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return autoregressive_sim_model_namespace::profiles__;
}

#endif


